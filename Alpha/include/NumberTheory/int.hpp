#pragma once
#ifndef __IQ_INT__
#define __IQ_INT__
#include "Core/iq_core.hpp"
#if _IQ_COMPILER_PREPROCESSOR
#include "DataStructures/array.hpp"
#include "Clibrary/iqstring.hpp"
#include "Io/iqio.hpp"

#pragma pack(push, _CRT_PACKING)
#pragma warning(push, _IQ_WARNING_LEVEL)
#pragma warning(disable : _IQ_DISABLED_WARNINGS)
_IQ_DISABLE_CLANG_WARNINGS
#pragma push_macro("new")
#undef new
_IQ_BEGIN


struct _Information {
    unsigned int* _Num;
    unsigned int _Siz;

};

auto print_binary_long(unsigned long long _Num) {
    //putchar('\n');
    auto mask = 0b1000000000000000000000000000000000000000000000000000000000000000;
    for (auto j = 0; j < 64; ++j) {
        putchar((_Num & mask) ? '1' : '0');
        mask >>= 1;
        //if (j == 32)putchar('-');
    }
    putchar('-');
}
auto print_binary_int(unsigned int _Num) {
    auto mask = 0b10000000000000000000000000000000;
    for (auto j = 0; j < 32; ++j) {
        putchar((_Num & mask) ? '1' : '0');
        mask >>= 1;
    }
}

struct unsigned_int128 {

    uint64_t _Num[2];

    constexpr auto operator+=(const unsigned_int128& _That)noexcept {
        _Num[0] += _That._Num[0];
        _Num[1] += _That._Num[1] + _Num[0] < _That._Num[0];
    }

    constexpr auto operator+=(const unsigned long long& _That)noexcept {
        _Num[0] += _That;
        _Num[1] += _Num[0] < _That;
    }

    constexpr auto operator+(const unsigned_int128& _That)noexcept {
        unsigned_int128 _Tmp{};
        _Tmp._Num[0] = _Num[0] + _That._Num[0];
        _Tmp._Num[1] = _Num[1] + _That._Num[1] + _Tmp._Num[0] < _Num[0];
        return _Tmp;
    }

    constexpr auto operator+(const unsigned long long& _That)noexcept {
        unsigned_int128 _Tmp{};
        _Tmp._Num[0] = _Num[0] + _That;
        _Tmp._Num[1] = _Num[1] + _Tmp._Num[0] < _That;
        return _Tmp;
    }

    constexpr auto operator*=(const unsigned_int128& _That)noexcept {
        _Num[0] *= _That._Num[0];
    }
};

template<unsigned int _Siz>
class static_unsigned_int {
    using size_t = unsigned long long;
    static constexpr auto _shft = 3;            // 08 = 2^3
    static constexpr auto _lsft = 6;            // 64 = 2^6
    static constexpr auto _byte = 8;            // sizeof(ULLONG) = 8
    static constexpr auto _bits = 64;           // bits count = 64
    static constexpr auto _zero = 0ULL;
    static constexpr auto _Tmax = ULLONG_MAX;

public:
    inline auto print()const noexcept {
        putchar('\n');
        auto mask = 0ULL;
        for (int i = _Siz - 1; i >= 0; --i) {
            mask = 0b1000000000000000000000000000000000000000000000000000000000000000;
            for (auto j = 0; j < 64; ++j) {
                putchar((_Num[i] & mask) ? '1' : '0');
                mask >>= 1;
            }
        }
    }
    constexpr auto& operator <<= (const unsigned int _Shift)noexcept {
        return *this;
    }
    constexpr auto& operator >>= (const unsigned int that)noexcept {
        return *this;
        memsft(_Num, _Num, _Siz, that);
    }

    constexpr auto operator<<(const static_unsigned_int& that)noexcept {
        static_unsigned_int Tmp{};
        memsft(Tmp, _Num, _Siz, that);
        return Tmp;
    }
    constexpr auto operator>>(const static_unsigned_int& that)noexcept {
        static_unsigned_int Tmp;
        memsft(Tmp, _Num, _Siz, that);
        return Tmp;
    }
    constexpr auto operator|=(const static_unsigned_int& that)noexcept {
        for (auto i = 0u; i < _Siz; ++i)
            this->_Num[i] |= that._Num[i];
        return *this;
    }
    constexpr auto operator&=(const static_unsigned_int& that)noexcept {
        for (auto i = 0u; i < _Siz; ++i)
            this->_Num[i] &= that._Num[i];
        return *this;
    }
    constexpr auto operator^=(const static_unsigned_int& that)noexcept {
        for (auto i = 0u; i < _Siz; ++i)
            this->_Num[i] ^= that._Num[i];
        return *this;
    }
    constexpr auto operator==(const static_unsigned_int& that)noexcept {
        return iq::memcmp(this->_Num, that._Num, _Siz * sizeof(size_t)) == 0;
    }
    constexpr auto operator!=(const static_unsigned_int& that)noexcept {
        return iq::memcmp(this->_Num, that._Num, _Siz * sizeof(size_t)) != 0;
    }
    constexpr auto operator>=(const static_unsigned_int& that)noexcept {

    }
    constexpr auto operator<=(const static_unsigned_int& that)noexcept {

    }
    constexpr auto operator+=(const static_unsigned_int& that)noexcept {
        auto carry1 = false;
        auto carry2 = false;
        auto storex = 0ULL;
        for (auto i = 0U; i < _Siz; ++i) {
            storex = ~that._Num[i];
            carry2 = (storex == 0 && carry1) ? true : (this->_Num[i] > storex - carry1);
            _Num[i] += (that._Num[i] + carry1);
            carry1 = carry2;
        }
        return *this;
    }
    constexpr auto operator-=(const static_unsigned_int& that)noexcept {
    }
    constexpr auto operator*=(const static_unsigned_int& that)noexcept {
    }
    constexpr auto operator/=(const static_unsigned_int& that)noexcept {
    }
    constexpr auto operator%=(const static_unsigned_int& that)noexcept {
    }

    [[nodiscard]] constexpr auto operator|(const static_unsigned_int& that)const noexcept {
    }
    [[nodiscard]] constexpr auto operator&(const static_unsigned_int& that)const noexcept {
    }
    [[nodiscard]] constexpr auto operator^(const static_unsigned_int& that)const noexcept {
    }
    [[nodiscard]] constexpr auto operator>(const static_unsigned_int& that)const noexcept {
    }
    [[nodiscard]] constexpr auto operator<(const static_unsigned_int& that)const noexcept {
    }
    [[nodiscard]] constexpr auto operator+(const static_unsigned_int& that)const noexcept {
    }
    [[nodiscard]] constexpr auto operator-(const static_unsigned_int& that)const noexcept {
    }
    [[nodiscard]] constexpr auto operator*(const static_unsigned_int& that)const noexcept {
    }
    [[nodiscard]] constexpr auto operator/(const static_unsigned_int& that)const noexcept {
    }
    [[nodiscard]] constexpr auto operator%(const static_unsigned_int& that)const noexcept {
    }

    size_t _Num[_Siz];
};
template<unsigned int _Siz>
class static_signed_int {

};

class dynamic_unsigned_int {

public:

#if __special_compiler__
    using _Mtype = __uint128_t;
    using _Type = int64_t;
    using _Htype = uint64_t;
    using _Stype = uint64_t;
    using initializer = std::initializer_list<uint64_t>;
#else
    using _Mtype = iq::int64_t;
    using _Type  = iq::int64_t;
    using _Htype = iq::Int32_t;
    using _Stype = iq::Int64_t;
    using initializer = std::initializer_list<iq::Int64_t>;
#endif

private:

    inline void _Alloc (_Stype _Size)noexcept;
    inline void _Calloc(_Stype _Size)noexcept;
    inline void _Rlloc (_Stype _Size)noexcept;
    inline void _Update(_Stype _Size)noexcept;

public:

    _IQ_API friend inline void _print(const dynamic_unsigned_int& _That)noexcept;

    _IQ_API friend inline void add(dynamic_unsigned_int& _Answ, const dynamic_unsigned_int& _First, const dynamic_unsigned_int& _Secnd)noexcept;
    _IQ_API friend inline void sub(dynamic_unsigned_int& _Answ, const dynamic_unsigned_int& _First, const dynamic_unsigned_int& _Secnd)noexcept;
    _IQ_API friend inline void mul(dynamic_unsigned_int& _Answ, const dynamic_unsigned_int& _First, const dynamic_unsigned_int& _Secnd)noexcept;
    _IQ_API friend inline void div(dynamic_unsigned_int& _Answ, const dynamic_unsigned_int& _First, const dynamic_unsigned_int& _Secnd)noexcept;
    _IQ_API friend inline void mod(dynamic_unsigned_int& _Answ, const dynamic_unsigned_int& _First, const dynamic_unsigned_int& _Secnd)noexcept;
  
    _IQ_API friend inline void mulx(dynamic_unsigned_int& _Answ, const dynamic_unsigned_int& _First, const dynamic_unsigned_int& _Secnd)noexcept;
    _IQ_API friend inline void addi(dynamic_unsigned_int& _Answ, const dynamic_unsigned_int& _First, const dynamic_unsigned_int& _Secnd)noexcept;
    _IQ_API friend inline void mulm(dynamic_unsigned_int& _Answ, const dynamic_unsigned_int& _First, const dynamic_unsigned_int& _Secnd)noexcept;

    dynamic_unsigned_int()noexcept;
    dynamic_unsigned_int(const _Stype _Size)noexcept;
    dynamic_unsigned_int(const initializer& _List)noexcept;
    dynamic_unsigned_int(dynamic_unsigned_int&& _That)noexcept;
    dynamic_unsigned_int(const dynamic_unsigned_int& _That)noexcept;

    ~dynamic_unsigned_int()noexcept;
   
    constexpr dynamic_unsigned_int& operator=(const _Stype _Size)noexcept;
    constexpr dynamic_unsigned_int& operator=(const initializer& _That)noexcept;
    constexpr dynamic_unsigned_int& operator=(dynamic_unsigned_int&& _That)noexcept;
    constexpr dynamic_unsigned_int& operator=(const dynamic_unsigned_int& _That)noexcept;


    _NODISCARD constexpr iq::int01_t operator==(const dynamic_unsigned_int& _That)const noexcept;
    _NODISCARD constexpr iq::int01_t operator!=(const dynamic_unsigned_int& _That)const noexcept;
    _NODISCARD constexpr iq::int01_t operator> (const dynamic_unsigned_int& _That)const noexcept;
    _NODISCARD constexpr iq::int01_t operator< (const dynamic_unsigned_int& _That)const noexcept;
    _NODISCARD constexpr iq::int01_t operator>=(const dynamic_unsigned_int& _That)const noexcept;
    _NODISCARD constexpr iq::int01_t operator<=(const dynamic_unsigned_int& _That)const noexcept;


    constexpr dynamic_unsigned_int& operator<<=(const _Stype _Shift)noexcept;
    constexpr dynamic_unsigned_int& operator>>=(const _Stype _Shift)noexcept;

    constexpr dynamic_unsigned_int& operator|=(const dynamic_unsigned_int& _That)noexcept;
    constexpr dynamic_unsigned_int& operator&=(const dynamic_unsigned_int& _That)noexcept;
    constexpr dynamic_unsigned_int& operator^=(const dynamic_unsigned_int& _That)noexcept;
    constexpr dynamic_unsigned_int& operator+=(const dynamic_unsigned_int& _That)noexcept;
    constexpr dynamic_unsigned_int& operator-=(const dynamic_unsigned_int& _That)noexcept;
    constexpr dynamic_unsigned_int& operator*=(const dynamic_unsigned_int& _That)noexcept;
    constexpr dynamic_unsigned_int& operator/=(const dynamic_unsigned_int& _That)noexcept;
    constexpr dynamic_unsigned_int& operator%=(const dynamic_unsigned_int& _That)noexcept;


    _NODISCARD dynamic_unsigned_int operator<<(const _Stype that)const noexcept;
    _NODISCARD dynamic_unsigned_int operator>>(const _Stype that)const noexcept;

    _NODISCARD dynamic_unsigned_int operator|(const dynamic_unsigned_int& _That)const noexcept;
    _NODISCARD dynamic_unsigned_int operator&(const dynamic_unsigned_int& _That)const noexcept;
    _NODISCARD dynamic_unsigned_int operator^(const dynamic_unsigned_int& _That)const noexcept;
    _NODISCARD dynamic_unsigned_int operator+(const dynamic_unsigned_int& _That)const noexcept;
    _NODISCARD dynamic_unsigned_int operator-(const dynamic_unsigned_int& _That)const noexcept;

private:
    _Mtype* _Num;
    _Stype  _Siz;
    _Stype  _Cap;

};

_IQ_END
#pragma pop_macro("new")
_IQ_RESTORE_CLANG_WARNINGS
#pragma warning(pop)
#pragma pack(pop)
#endif
#endif

using unsigned_int = iq::dynamic_unsigned_int;
