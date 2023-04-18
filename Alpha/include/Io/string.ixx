module;
#define _CRT_SECURE_NO_WARNINGS
#include<cstdlib>
#include<cstdio>

export module string;

import io;
import typetraits;
import typeinfo;

//extern "C" {
//    char* __cdecl gcvt(
//        double _Value,
//        int    _DigitCount,
//        char*  _DstBuf
//    );
//    _inline int __cdecl sprintf(
//        char* const _Buffer,
//        char const* const _Format,
//    ...);
//}

export namespace alpha {

class string {
public:
string()noexcept;

~string()noexcept;

string(string&& _That)noexcept;

string(const char* _That)noexcept;

string(const string& _That)noexcept;

explicit string(const size_t Siz)noexcept;

string& operator=(const size_t _Siz)noexcept = delete;

string& operator=(string&& _That)noexcept;

string& operator=(const char* _That)noexcept;

string& operator=(const string& _That)noexcept;

bool operator==(const string& _That)noexcept;

string& operator+=(char _Char)noexcept;

string& operator+=(const char* _That)noexcept;

string& operator+=(const string& _That)noexcept;

string  operator+(char _Char)const noexcept;

string  operator+(const char*_That)const noexcept;

string  operator+(const string& _That)const noexcept;

string& assign(const size_t _N,const char _C)noexcept;

string& assign(const char* _Strng,const size_t _Len)noexcept;

string& assign(const string& _That,const size_t _Pos,const size_t _Len)noexcept;

string& insert(const size_t _Pos, const char _C)noexcept;

string& insert(const size_t _Pos, const char* _That)noexcept;

string& insert(const size_t _Pos, const string& _That)noexcept;

string& insert(const size_t _Pos, const size_t _Len, const char _C)noexcept;

string& insert(const size_t _Pos, const char* _That, const size_t _Len)noexcept;

string& insert(const size_t _Pos, const string& _That, const size_t _Subpos, const size_t _Sublen)noexcept;

void input()noexcept;
const char* c_str()const noexcept;

char* data()const noexcept;

private:
struct StringImpl;
StringImpl* _Impl;

};

void _print(const string& _That)noexcept;
void _input(string& _That)noexcept;

inline string _sprint(const char _Cha)noexcept {
    return string(_Cha);
}
inline string _sprint(const char* _Str)noexcept {
    return string(_Str);
}

template<class _Ty> 
inline constexpr string _sprint(const _Ty& _Obj)noexcept {
    if constexpr (is_fundamental_v<_Ty>) {
        char _Buffer[25] = {32,0};
        char* _Buf = _Buffer + 1;

        if      constexpr (is_same_v<_Ty, int>) { itos(_Obj, _Buf); return string(_Buffer); }
        else if constexpr (is_same_v<_Ty, short>) { itos(_Obj, _Buf); return string(_Buffer);}
        else if constexpr (is_same_v<_Ty, long long>) { ltos(_Obj, _Buf); return string(_Buffer);}
        else if constexpr (is_same_v<_Ty, unsigned int>) { Itos(_Obj, _Buf); return string(_Buffer);}
        else if constexpr (is_same_v<_Ty, unsigned short>) { Itos(_Obj, _Buf); return string(_Buffer);}
        else if constexpr (is_same_v<_Ty, unsigned long long>) { Ltos(_Obj, _Buf); return string(_Buffer); }

        else if constexpr (is_same_v<_Ty, float> ) { sprintf(_Buf, "%f", _Obj); return string(_Buffer); }
        else if constexpr (is_same_v<_Ty, double>) { sprintf(_Buf, "%f", _Obj); return string(_Buffer); }

        else {
            _print("\nYou should define alpha::string _sprint(const ");
            _print(typeof<_Ty>);
            _print(" _var) function in your code\n\n");
            system("pause");
            exit(1);
        }
    }
    else {
        _print("\nYou should define alpha::string _sprint(const ");
        _print(typeof<_Ty>);
        _print("& _Obj) function in your code\n\n");
        system("pause");
        exit(1);
    }
}
template<class _Ty, class... _Ts>
constexpr void sprint(string& _Str, const _Ty& _Val, const _Ts&... _Args)noexcept {
	_Str += _sprint(_Val);
	if constexpr (sizeof...(_Args) > 0) sprint(_Str, _Args...);
}


	
}



