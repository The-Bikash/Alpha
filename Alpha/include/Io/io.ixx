module;
export module io;

import typeinfo;
import typetraits;

extern "C" {

    char* __cdecl gcvt(
        double _Value,
        int    _DigitCount,
        char*  _DstBuf
    );


    __inline int __cdecl printf(
        char const* const _Format,
        ...);

    export int __cdecl system(char const* _Command);
    export void __cdecl exit(int _Code);
}
export char newline = '\n';

export namespace alpha {

    inline unsigned short len(const unsigned int _Val)noexcept;
    inline unsigned short Len(const unsigned long long _Val)noexcept;

    inline void itos(int _Val, char* _Buffer)noexcept;
    inline void ltos(long long _Val, char* _Buffer)noexcept;
    inline void Itos(unsigned int _Val, char* _Buffer)noexcept;
    inline void Ltos(unsigned long long _Val, char* _Buffer)noexcept;

    inline int stoi(const char* _Str)noexcept;
    inline long long stol(const char* _Str)noexcept;
    inline unsigned int stoI(const char* _Str)noexcept;
    inline unsigned long long stoL(const char* _Str)noexcept;

    inline void _print(char  _Cha)noexcept;
    inline void _prints(char* _Str)noexcept;
    inline void _print(const char* _Str)noexcept;
    void _print(const bool _var)noexcept;

    template<class _Ty> inline constexpr void _print(const _Ty& _Obj)noexcept {
        if constexpr (is_fundamental_v<_Ty>) {
            char _Buffer[25] = { 32,0 }; char* _Buf = _Buffer + 1;

            if      constexpr (is_same_v<_Ty, int>) { itos(_Obj, _Buf); _prints(_Buffer); }
            else if constexpr (is_same_v<_Ty, short>) { itos(_Obj, _Buf); _prints(_Buffer); }
            else if constexpr (is_same_v<_Ty, long long>) { ltos(_Obj, _Buf); _prints(_Buffer); }
            else if constexpr (is_same_v<_Ty, unsigned int>) { Itos(_Obj, _Buf); _prints(_Buffer); }
            else if constexpr (is_same_v<_Ty, unsigned short>) { Itos(_Obj, _Buf); _prints(_Buffer); }
            else if constexpr (is_same_v<_Ty, unsigned long long>){ Ltos(_Obj, _Buf); _prints(_Buffer);}


            /*else if constexpr (is_same_v<_Ty, float>) { gcvt(_Obj, 24, _Buf); _prints(_Buffer); }
            else if constexpr (is_same_v<_Ty, double>) { gcvt(_Obj, 24, _Buf); _prints(_Buffer); }*/
            else if constexpr (is_same_v<_Ty, float>) { printf("%f", _Obj); }
            else if constexpr (is_same_v<_Ty, double>) { printf("%f", _Obj); }


            else {
                _print("\nYou should define void _print(const ");
                _print(typeof<_Ty>);
                _print(" _var) function in your code\n\n");
                system("pause");
                exit(1);
            }
        } else {
            _print("\nYou should define void _print(const ");
            _print(typeof<_Ty>);
            _print("& _Obj) function in your code\n\n");
            system("pause");
            exit(1);
        }
    }

    template<class _Ty, class... _Ts>
    inline constexpr void print(const _Ty& _Val, const _Ts&... _Args)noexcept {
        _print(_Val); if constexpr (sizeof...(_Args) > 0) print(_Args...);
    }

}