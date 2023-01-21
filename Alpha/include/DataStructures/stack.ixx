module;
#include <stack>
export module stack;

export namespace alpha {
	template<class _Ty> using stack = std::stack<_Ty>;
}