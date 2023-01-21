module;

#include<list>

export module list;

export namespace alpha {

	template<class _Ty> using list = std::list<_Ty>;
}

