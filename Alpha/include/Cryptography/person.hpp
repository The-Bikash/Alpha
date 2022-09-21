#pragma once

#include <dynamic_array.hpp>
#include <graph.hpp>
#include <integer.hpp>
#include <polynomial.hpp>

#include <string>
#include <fstream>
#include <algorithm>

#include <iostream>
#include <sstream>


_Sz N = 30ll;

dynamic_array<integer> solution(const dynamic_array<_Sz>& private_key)
{
	_Sz size = private_key.size(), i = 0, j = 0;

	dynamic_array<integer> private_sol(3ll * size);

	integer* private_sol_ptr = private_sol.data();

	const _Sz* private_key_ptr = private_key.data();


	for (i = 0; i < size; ++i)
	{
		switch (*(private_key_ptr + i))
		{
		case 1ll:

			*(private_sol_ptr + j++) = 1ll;
			*(private_sol_ptr + j++) = 0ll;
			*(private_sol_ptr + j++) = 0ll;
			break;

		case 2ll:

			*(private_sol_ptr + j++) = 0ll;
			*(private_sol_ptr + j++) = 1ll;
			*(private_sol_ptr + j++) = 0ll;
			break;

		case 3ll:

			*(private_sol_ptr + j++) = 0ll;
			*(private_sol_ptr + j++) = 0ll;
			*(private_sol_ptr + j++) = 1ll;
			break;

		default:

			throw("Error");
			break;
		}
	}
	return private_sol;
}

dynamic_array<_Sz> private_key_file(const std::string& path)
{
	std::fstream file;

	file.open(path, std::ios::in);

	if (file.is_open())
	{
		file >> N;

		dynamic_array<_Sz> Tmp(N);

		for (_Sz i = 0; i < N; ++i)
		{
			file >> Tmp[i];
		}

		file.close();

		return Tmp;
	}

	throw("Error");
}

class person
{

private:

	dynamic_array<_Sz> _private_key;

	dynamic_array<integer> _private_sol;

	graph _public_key;

public:

	person()
	{
		_private_key = random_int(1, 3, N);
		_private_sol = solution(_private_key);
		_public_key = _private_key;

		/*_private_key = random_int(1, 3, N);
		_private_sol = solution(_private_key);*/
	}
	person(std::ofstream& private_file, std::ofstream& public_file)
	{
		_private_key = random_int(1, 3, N);
		_private_sol = solution(_private_key);
		_public_key = _private_key;

		private_file << _private_key.size() << " ";
		for (const auto& _Val : _private_key)
			private_file << _Val << " ";
		private_file << "\n";
		public_file << _public_key;
	}
	person(std::ifstream& private_file, std::ifstream& public_file)
	{
		private_file >> _private_key;
		std::itostr_helper1 << _private_key <<"\n";

		_private_sol = solution(_private_key);

		public_file >> _public_key;
		std::itostr_helper1 << _public_key;
		N = _public_key.vertex_count();

		_private_key = random_int(1, 3, N);
		std::itostr_helper1 << _private_key;
		_private_sol = solution(_private_key);
	}

	

	graph public_key()const
	{
		return _public_key;
	}
	
	std::string message(polynomial<integer>& pol)const
	{
		dynamic_array<integer> private_sol = _private_sol;

		for (_Sz i = _private_sol.size(); i < pol.var_list().size(); ++i)
		{
			private_sol.emplace_back(0ll);
		}

		integer messageNum = pol(private_sol);

		puts("\n\nHi I am Alice . I have decrypted the cipher text. The message is : \n");

		return  ConvertIntegerToMessage(messageNum);
	}
};

void input(std::string& message)
{
	std::itostr_helper1 << "\nEnter a message : ";
	
	std::getline(std::cin, message);
}

dynamic_array<std::string> var_vec(_Sz n)
{
	dynamic_array<std::string> var_list(3 * n);

	std::string Tmp;

	_Sz i, j = 0;

	for (i = 0; i < n; ++i)
	{
		Tmp = 't' + std::to_string(i);

		var_list[j++] = Tmp + ",1";
		var_list[j++] = Tmp + ",2";
		var_list[j++] = Tmp + ",3";
	}

	return var_list;
}
