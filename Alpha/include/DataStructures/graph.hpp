//#pragma once
//
//#include "../DataStructures/array.h"
//#include "../Core/iq_core.h"
//#include "../Io/iqio.h"
//
//
//#include <random>
//#include <utility>
//
//using _Sz = long long;
//
//class graph
//{
//
//private:
//
//	array<array<_Sz>> aL;
//
//	array<std::pair<_Sz, _Sz>> eL;
//	     
//public:
//	graph() {};
//
//	graph(const array<array<_Sz>>& AdjacencyList)noexcept :aL(AdjacencyList)
//	{
//		_Sz index = 0;
//		for (const auto& a : aL)
//		{
//			for (const auto& v : a)
//				if (v > index)
//					eL.emplace_back(index, v);
//			++index;
//		}
//	}
//
//	graph(const array<_Sz>& coloring)noexcept
//	{
//		_Sz i, j, size = coloring.size(); aL = size;
//
//		std::random_device device;
//
//		std::mt19937 rng(device());
//
//		std::uniform_int_distribution<unsigned int> dist(0, 1); // distribution in range [start, end]
//
//		bool allow;
//
//		for (i = 0; i < size; ++i)
//		{
//			for (j = i; j < size; ++j)
//			{
//				if (size <= 100)
//				{
//					allow = static_cast<bool>(dist(rng));
//				}
//				else if (size > 100 && size <= 200)
//				{
//					allow = static_cast<bool>(dist(rng) * dist(rng));
//				}
//				else if (size > 200 && size <= 300)
//				{
//					allow = static_cast<bool>(dist(rng) * dist(rng) * dist(rng));
//				}
//				else if (size > 300 && size <= 400)
//				{
//					allow = static_cast<bool>(dist(rng) * dist(rng) * dist(rng) * dist(rng));
//				}
//				else if (size > 400 && size <= 500)
//				{
//					allow = static_cast<bool>(dist(rng) * dist(rng) * dist(rng) * dist(rng) * dist(rng));
//				}
//				else if (size > 500 && size <= 600)
//				{
//					allow = static_cast<bool>(dist(rng) * dist(rng) * dist(rng) * dist(rng) * dist(rng) * dist(rng));
//				}
//				else
//				{
//					allow = static_cast<bool>(dist(rng) * dist(rng) * dist(rng) * dist(rng) * dist(rng) * dist(rng));
//				}
//
//				if (allow && i != j && coloring[i] != coloring[j])
//				{
//					aL[i].push_back(j);
//					aL[j].push_back(i);
//				}
//			}
//		}
//
//		_Sz index = 0;
//
//		for (const auto& a : aL)
//		{
//			for (const auto& v : a)
//			{
//				if (v > index)
//				{
//					eL.emplace_back(index, v);
//				}
//			}
//			++index;
//		}
//	}
//
//	graph(const graph& graph)noexcept
//	{
//		aL = graph.aL;
//		eL = graph.eL;
//	}
//
//	graph(graph&& graph)noexcept
//	{
//		aL = std::move(graph.aL);
//		eL = std::move(graph.eL);
//	}
//
//	graph& operator = (const graph& graph) noexcept
//	{
//		if (this != &graph)
//		{
//			aL = graph.aL;
//			eL = graph.eL;
//		}
//		
//		return *this;
//	}
//
//	graph& operator = (graph&& graph)noexcept
//	{
//		if (this != &graph)
//		{
//			aL = std::move(graph.aL);
//			eL = std::move(graph.eL);
//		}
//		return *this;
//	}
//
//	array<std::pair<_Sz, _Sz>> edge_list()const
//	{
//		return eL;
//	}
//
//	constexpr _Sz vertex_count()const
//	{
//		return static_cast<_Sz>(aL.size());
//	}
//
//	constexpr _Sz edge_count()const
//	{
//		return static_cast<_Sz>(eL.size());
//	}
//
//	/*inline void print_obj()const 
//	{
//		int64 i = 0, j = 0, n = (int64)aL.size();
//		dynamic_array<bool> a(n, false);
//		dynamic_array<dynamic_array<bool>> aM(n, a);
//		for (const auto& L : aL) {
//			for (const auto& v : L)
//				aM[i][v] = 1;
//			i++;
//		}
//		puts("\n\nGraph : ");
//		for (i = 0; i < n; ++i) {
//			fputs("\n(", stdout);
//			for (j = 0; j < n; ++j)
//				print(aM[i][j],stdout), putchar(' ');
//			putchar(')');
//		}
//	}*/
//
//	void print(std::ofstream& file) {
//		file << aL.size() << '\n';
//		for (auto& L : aL) {
//			file << L.size() << ' ';
//			for (auto& e : L) {
//				file << e << ' ';
//			}
//			file << '\n';
//		}
//	}
//	void print(std::ostream& file) {
//		for (auto& L : aL) {
//			for (auto& e : L) {
//				file << e << ' ';
//			}
//			file << '\n';
//		}
//	}
//	void scan(std::ifstream& file) {
//		_Sz aL_size, L_size;
//		file >> aL_size; aL = aL_size;
//		for (_Sz i = 0; i < aL_size; ++i) {
//			file >> L_size;
//			aL[i] = L_size;
//			for (_Sz j = 0; j < L_size; ++j) {
//				file >> aL[i][j];
//			}
//		}
//
//		_Sz index = 0; eL.clear();
//		for (const auto& a : aL)
//		{
//			for (const auto& v : a)
//				if (v > index)
//					eL.emplace_back(index, v);
//			++index;
//		}
//	}
//
//};
//
//std::ofstream& operator << (std::ofstream& file, graph& g) {
//	g.print(file);
//	return file;
//}std::ostream& operator << (std::ostream& file, graph& g) {
//	g.print(file);
//	return file;
//}
//std::ifstream& operator >> (std::ifstream& file, graph& g) {
//	g.scan(file);
//	return file;
//}
//
//
//
//
