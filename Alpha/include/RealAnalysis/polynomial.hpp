#pragma once
#ifndef __IQPOLYNOMIAL__
#define __IQPOLYNOMIAL__
#include "../Core/iq_core.hpp"
#include "../DataStructures/string.hpp"
#include "../DataStructures/array.hpp"
#include "../DataStructures/list.hpp"
#include "../Io/iqio.hpp"


_IQ_BEGIN

void print(const std::string& s, FILE* _Stream)
{
	for (const auto& ch : s)
		fputc(ch, stdout);
}


using _Sz = long long;

template<class _Ty>
class polynomial {

private:

	struct node
	{
		_Ty coeff;

		dynamic_array<_Sz> expo;
		
		constexpr void print()const
		{
			std::cout << "[" << coeff << ",(";

			for (const auto& i : expo)
			{
				std::cout << i << ' ';
			}

			std::cout << ")]";
		}

		[[nodiscard]] constexpr bool operator <  (const node& that)const noexcept
		{
			_Sz n = expo.size();

			const _Sz* expo_ptr = this->expo.data();
			const _Sz* xexpo_ptr = that.expo.data();

			for (_Sz i = 0; i < n; ++i)
			{
				if (*(expo_ptr + i) == *(xexpo_ptr + i)) continue;

				if (*(expo_ptr + i) > *(xexpo_ptr + i)) return true;

				return false;
			}

			return false;
		}

		[[nodiscard]] constexpr bool operator == (const node& _Val)const noexcept
		{
			_Sz size = (_Sz)expo.size();

			if (size != _Val.expo.size())
			{
				return false;
			}

			const _Sz* expo_ptr = expo.data();
			const _Sz* xexpo_ptr = _Val.expo.data();

			for (_Sz i = 0; i < size; ++i)
			{
				if (*(expo_ptr + i) != *(xexpo_ptr + i))
				{
					return false;
				}
			}

			return true;
		}

		[[nodiscard]] constexpr node operator +  (const node& _Val)const noexcept
		{
			return { coeff + _Val.coeff,expo }; // both pair's expo must be same
		}

		[[nodiscard]] constexpr node operator *  (const node& _Val)const noexcept
		{
			_Sz size = expo.size(); node Tmp; Tmp.expo = size;

			const _Sz* expo_ptr = this->expo.data();
			const _Sz* xexpo_ptr = _Val.expo.data();

			_Sz* Tmpexpo_ptr = Tmp.expo.data();

			Tmp.coeff = this->coeff * _Val.coeff;

			for (_Sz i = 0; i < size; ++i)
			{
				*(Tmpexpo_ptr + i) = *(expo_ptr + i) + *(xexpo_ptr + i);
			}

			return Tmp;
		}

		constexpr node& operator += (const node& _Val)noexcept
		{
			coeff += _Val.coeff;  // both pair's expo must be same

			return *this;
		}
	};

	dynamic_array<std::string> vL; // variable list

	std::list<node> fx; // polynomial list representation

public:

	constexpr polynomial()noexcept
	{

	}

	constexpr polynomial(const _Ty& coeff, const dynamic_array<std::string>& vL)noexcept :vL(vL)
	{
		fx.emplace_back(coeff, dynamic_array<_Sz>(vL.size(), 0ll));
	}

	constexpr polynomial(const _Ty& coeff, const dynamic_array<_Sz>& expo, const dynamic_array<std::string>& vL)noexcept :vL(vL)
	{
		fx.emplace_back(coeff, expo);
	}

	constexpr polynomial(const std::list<std::pair<_Ty, dynamic_array<_Sz>>>& fx, const dynamic_array<std::string> vL)noexcept : vL(vL)
	{
		//for (const auto& pair_ : fx)
		//{
		//	if (pair_.second.size() != vL.size()) throw("ERROR");
		//}

		//std::set<std::string> TmpSet(vL.begin(), vL.end());

		//if (TmpSet.size() != vL.size())
		//{
		//	throw("ERROR");  // Searching duplicates Variable;
		//}
		
		this->vL = vL;

		for (const auto& pair_ : fx)
		{
			this->fx.emplace_back(pair_.first, pair_.second);
		}

		this->fx.sort();
	}

	constexpr polynomial(const polynomial& pol)noexcept
	{
		this->vL = pol.vL;
		this->fx = pol.fx;
	}

	constexpr polynomial(polynomial&& pol)noexcept
	{
		this->vL = std::move(pol.vL);
		this->fx = std::move(pol.fx);
	}

	constexpr polynomial& operator = (polynomial&& pol)noexcept
	{
		this->vL = std::move(pol.vL);
		this->fx = std::move(pol.fx);

		return *this;
	}

	constexpr _Ty operator()(const dynamic_array<_Ty>& _Val)const
	{

		if (_Val.size() != vL.size()) throw("ERROR");

		_Sz n = fx.size(), m = _Val.size(), i = 0, j = 0;

		_Ty sum = 0ll, Tmp = 1ll;

		static dynamic_array<std::pair<_Sz, _Ty>> Tmpcatch;

		Tmpcatch = m;

		for (i = 0; i < m; ++i)
		{
			// reset Tmpcatch

			Tmpcatch[i].first = 0ll;

			Tmpcatch[i].second = 1ll; 
		}

		for (auto rit = fx.rbegin(); rit != fx.rend(); ++rit)
		{
			Tmp = 1ll;

			for (j = 0; j < m; ++j)
			{
				if (rit->expo[j] >= Tmpcatch[j].first)
				{
					Tmpcatch[j].second *= pow(_Val[j], rit->expo[j] - Tmpcatch[j].first);

					Tmpcatch[j].first = rit->expo[j];

					Tmp *= Tmpcatch[j].second;

					continue;
				}

				Tmp *= pow(_Val[j], rit->expo[j]);
			}

			sum += Tmp * rit->coeff;
		}

		return sum;
	}

	constexpr polynomial operator + (const polynomial& f)const noexcept
	{
		polynomial TmpPoly;

		if (f.vL == vL)
		{
			auto iterator1 = fx.begin();

			auto iterator2 = f.fx.begin();

			auto iterator1e = fx.end();

			auto iterator2e = f.fx.end();

			while (iterator1 != iterator1e && iterator2 != iterator2e)
			{
				if (*iterator1 == *iterator2)
				{
					TmpPoly.fx.emplace_back(*iterator1 + *iterator2);

					++iterator1;
					++iterator2;

					continue;
				}

				if (*iterator1 < *iterator2)
				{
					TmpPoly.fx.push_back(*iterator1);

					++iterator1;

					continue;
				}

				TmpPoly.fx.push_back(*iterator2);

				++iterator2;

			}

			while (iterator1 != iterator1e)
			{
				TmpPoly.fx.push_back(*iterator1);

				++iterator1;
			}

			while (iterator2 != iterator2e)
			{
				TmpPoly.fx.push_back(*iterator2);

				++iterator2;
			}

			TmpPoly.vL = vL;

			return TmpPoly;
		}

		polynomial P1 = *this, P2 = f;

		upgrade_poly(P1, P2);

		auto iterator1 = P1.fx.begin();

		auto iterator2 = P2.fx.begin();

		auto iterator1e = P1.fx.end();

		auto iterator2e = P2.fx.end();

		while (iterator1 != iterator1e && iterator2 != iterator2e)
		{
			if (*iterator1 == *iterator2)
			{
				TmpPoly.fx.emplace_back(*iterator1 + *iterator2);

				++iterator1;
				++iterator2;

				continue;
			}

			if (*iterator1 < *iterator2)
			{
				TmpPoly.fx.push_back(*iterator1);

				++iterator1;

				continue;
			}

			TmpPoly.fx.push_back(*iterator2);

			++iterator2;

		}

		while (iterator1 != iterator1e)
		{
			TmpPoly.fx.push_back(*iterator1);

			++iterator1;
		}

		while (iterator2 != iterator2e)
		{
			TmpPoly.fx.push_back(*iterator2);

			++iterator2;
		}

		TmpPoly.vL = P1.vL;

		return TmpPoly;

	}

	constexpr polynomial& operator += (const polynomial& f)noexcept {

		if (f.vL == vL)
		{
			auto iterator1 = fx.begin();

			auto iterator2 = f.fx.begin();

			while (iterator1 != fx.end() && iterator2 != f.fx.end())
			{

				if (*iterator1 == *iterator2)
				{
					*iterator1 += *iterator2;

					++iterator1;
					++iterator2;

					continue;
				}

				if (*iterator1 < *iterator2)
				{
					// Actually this is *ptr1 > *ptr2.

					++iterator1;

					continue;
				}

				iterator1 = fx.insert(iterator1, *iterator2);

				++iterator2;

			}

			while (iterator2 != f.fx.end())
			{
				fx.push_back(*iterator2);

				++iterator2;
			}

			return *this;
		}

		polynomial p2 = f;

		upgrade_poly(*this, p2);

		auto iterator1 = fx.begin();

		auto iterator2 = p2.fx.begin();

		while (iterator1 != fx.end() && iterator2 != p2.fx.end())
		{

			if (*iterator1 == *iterator2)
			{
				*iterator1 += *iterator2;

				++iterator1;
				++iterator2;

				continue;
			}

			if (*iterator1 < *iterator2)
			{
				// Actually this is *ptr1 > *ptr2.

				++iterator1;

				continue;
			}

			iterator1 = fx.insert(iterator1, *iterator2);

			++iterator2;

		}

		while (iterator2 != p2.fx.end())
		{
			fx.push_back(*iterator2);

			++iterator2;
		}

		return *this;
	}

	constexpr polynomial operator * (const polynomial& f)const
	{
		polynomial TmpPoly;

		if (f.vL == vL)
		{
			auto iterator1 = fx.begin();
			auto iterator2 = f.fx.begin();

			while (iterator1 != fx.end())
			{
				iterator2 = f.fx.begin();

				while (iterator2 != f.fx.end())
				{
					TmpPoly.fx.emplace_back(*iterator1 * *iterator2);

					++iterator2;
				}

				++iterator1;
			}

			TmpPoly.fx.sort();

			auto iteratorx = TmpPoly.fx.begin();
			auto iterator3 = ++TmpPoly.fx.begin();

			bool Delete = false;

			while (iterator3 != TmpPoly.fx.end())
			{
				if (*iteratorx == *iterator3)
				{
					Delete = true;

					*iteratorx += *iterator3;
				}
				else
				{
					++iteratorx;

					if (Delete)
					{
						iteratorx = TmpPoly.fx.erase(iteratorx, iterator3);

						Delete = false;
					}
				}

				++iterator3;
			}

			TmpPoly.vL = vL;

			return TmpPoly;

		}

		polynomial P1 = *this, P2 = f;

		upgrade_poly(P1, P2);

		auto iterator1 = P1.fx.begin();
		auto iterator2 = P2.fx.begin();

		while (iterator1 != P1.fx.end())
		{
			iterator2 = P2.fx.begin();

			while (iterator2 != P2.fx.end())
			{
				TmpPoly.fx.emplace_back(*iterator1 * *iterator2);

				++iterator2;
			}

			++iterator1;
		}

		TmpPoly.fx.sort();

		auto iteratorx = TmpPoly.fx.begin();
		auto iterator3 = ++TmpPoly.fx.begin();

		bool Delete = false;

		while (iterator3 != TmpPoly.fx.end())
		{
			if (*iteratorx == *iterator3)
			{
				Delete = true;

				*iteratorx += *iterator3;
			}
			else
			{
				++iteratorx;

				if (Delete)
				{
					iteratorx = TmpPoly.fx.erase(iteratorx, iterator3);

					Delete = false;
				}
			}

			++iterator3;
		}

		TmpPoly.vL = P1.vL;

		return TmpPoly;
	}

	constexpr dynamic_array<std::string> var_list()const
	{
		return vL;
	}

private:

	constexpr void upgrade_poly(polynomial& p1, polynomial& p2)const noexcept
	{
		//std::cout << "Upgrade poly cost\n";

		dynamic_array<std::string> TmpVarlist = p1.vL;

		_Sz n1 = p1.vL.size(), n2 = p2.vL.size(), i, j;

		dynamic_array<_Sz> TmpPosition; _Sz TmpIndex = n1;

		// Code for upgrade variable list

		for (j = 0; j < n2; ++j)
		{
			for (i = 0; i < n1; ++i)
			{
				if (p1.vL[i] == p2.vL[j])
				{
					TmpPosition.push_back(i);

					break;
				}
			}

			if (i == n1)
			{
				TmpPosition.push_back(TmpIndex++);

				TmpVarlist.push_back(p2.vL[j]);
			}
		}

		// Code for upgrade P1 Polynomial

		_Sz n3 = TmpVarlist.size() - p1.vL.size();

		for (auto& pair_ : p1.fx)
		{
			for (_Sz i = 0; i < n3; ++i)
			{
				pair_.expo.push_back(0);
			}
		}

		p1.vL = TmpVarlist;

		// Code for upgrade P2 Polynomial

		dynamic_array<_Sz> TmpExpo(TmpVarlist.size(), 0);

		for (auto& pair_ : p2.fx)
		{
			for (_Sz i = 0; i < pair_.expo.size(); ++i)
			{
				TmpExpo[TmpPosition[i]] = pair_.expo[i];
			}
				
			pair_.expo = TmpExpo;

			for (auto& e : TmpExpo)
			{
				e = 0;  // reset TmpExpo;
			}
		}

		p2.vL = TmpVarlist;

		return;
	}

public:

	/*constexpr void printExpo(const dynamic_array<int64>& x)const noexcept
	{
		int64 index = 0;

		for (const auto& i : x)
		{
			if (i != 0)
				if (i != 1)
					out('(', vL[index], ')', '^', i);
				else out('(', vL[index], ')');
			index++;
		}
	}*/

	/*constexpr void printdata()const noexcept
	{
		std::cout << "\nVarible List : ";

		for (const auto& str : vL)
			std::cout << str << " ";

		std::cout << "\nF(";

		for (const auto& var : vL)
			std::cout <<'(' << var <<')' << " ";

		std::cout << ") = ";

		for (const auto& pair : fx)
			std::cout << " + (" << pair.coeff << ")",
			printExpo(pair.expo);
	}*/

	/*constexpr void print_obj(const bool yes = true)const noexcept
	{
		out("\nF(");
		if (yes)
			for (const auto& var : vL)
			{
				out('(', var, ") ");
			}

		out(") = ");

		for (const auto& pair : fx)
		{
			if (pair.coeff == 0ll) continue;
			out('\n');
			out(" + (" , pair.coeff, ")");
			printExpo(pair.expo);
		}
			
	}*/

	void print(std::ofstream& file) {
		file << vL.size() << '\n';
		for (const auto& var : vL)
			file << var << " ";
		file << fx.size();
		for (auto& nodex : fx) {
			file << "\n" << nodex.coeff <<"\n";

			for (auto& i : nodex.expo) {
				file << i << " ";
			}
		}

	}
	void scan(std::ifstream& file){
		_Sz size;
		file >> size;
		vL = size;
		for (_Sz i = 0; i < size; ++i) {
			file >> vL[i];
		}
		_Sz size_list;
		file >> size_list;
		fx.clear();
		integer Tmp_int; dynamic_array<_Sz> Tmp_arr(size);
		for (_Sz i = 0; i < size_list; ++i) {
			file >> Tmp_int;
			for (_Sz j = 0; j < size; ++j) {
				file >> Tmp_arr[j];
			}
			fx.emplace_back(Tmp_int, Tmp_arr);
		}
	}

	constexpr void printExpo(const dynamic_array<_Sz>& _Val)const noexcept
	{
		_Sz index = 0;

		for (const auto& i : _Val)
		{
			if (i != 0)
				if (i != 1)
					std::cout << vL[index] << '^' << i;
				else std::cout << vL[index];
			index++;
		}
	}

	constexpr void printdata()const noexcept
	{
		std::cout << "\nVarible List : ";

		for (const auto& str : vL)
			std::cout << str << " ";

		std::cout << "\nF(";

		for (const auto& var : vL)
			std::cout << var << " ";

		std::cout << ") = ";

		for (const auto& pair : fx)
			std::cout << " + (" << pair.coeff << ")",
			printExpo(pair.expo);
	}

	constexpr void print(const bool yes = true)noexcept
	{
		std::cout << "\nF(";
		if (yes)
			for (const auto& var : vL)
				std::cout << var << " ";

		std::cout << ") = ";

		for (auto& pair : fx)
			std::cout << " + (" << pair.coeff << ")",
			printExpo(pair.expo);
	}

	/*
	constexpr void print(std::ostream& file)const {
		
		for (const auto& var : vL)
			cipher_file << var << " ";
		cipher_file << "\n";

		for (const auto& node : fx)
		{
			out("\n", coeff, "\n");

			for (const auto& i : expo)
			{
				out(i, ' ');
			}
		}

	}
	constexpr void print(std::ostream& file)const {
		
		for (const auto& var : vL)
			cipher_file << var << " ";
		cipher_file << "\n";

		for (const auto& node : fx)
		{
			out("\n", coeff, "\n");

			for (const auto& i : expo)
			{
				out(i, ' ');
			}
		}

	}*/
};
template<class _Ty> std::ofstream& operator << (std::ofstream& file, polynomial<_Ty>& _Val) {
	_Val.print(file);
	return file;
}
template<class _Ty> std::ifstream& operator >> (std::ifstream& file, polynomial<_Ty>& _Val) {
	_Val.scan(file);
	return file;
}
template<class _Ty> std::ostream& operator << (std::ostream& cout, polynomial<_Ty>& p)noexcept
{
	p.print(false); return cout;
}


_IQ_END
#endif