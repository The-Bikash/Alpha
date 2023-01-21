module;

export module Int;

import core;
import initializer;

void print_binary_long(unsigned long long _Num);
void print_binary_int(unsigned int _Num);

export namespace alpha {
/*  struct unsigned_int128 {

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
    */
//#if __special_compiler__
//        using _Mtype = __uint128_t;
//        using _Type = int64_t;
//        using _Htype = uint64_t;
//        using _Stype = uint64_t;
//        using initializer = std::initializer_list<uint64_t>;
//#else
        using _Mtype = long long;
        using _Type = long long;
        using _Htype = unsigned int;
        using _Stype = unsigned long long;
        using longInitializer = initializer<unsigned long long>;
//#endif
    

    class UnsignedInt {
    public:
        friend inline void _print(const UnsignedInt& _That)noexcept;
        friend inline void Add(UnsignedInt& _Answ, const UnsignedInt& _First, const UnsignedInt& _Secnd)noexcept;
        friend inline void Sub(UnsignedInt& _Answ, const UnsignedInt& _First, const UnsignedInt& _Secnd)noexcept;
        friend inline void Mul(UnsignedInt& _Answ, const UnsignedInt& _First, const UnsignedInt& _Secnd)noexcept;
        friend inline void div(UnsignedInt& _Answ, const UnsignedInt& _First, const UnsignedInt& _Secnd)noexcept;
        friend inline void mod(UnsignedInt& _Answ, const UnsignedInt& _First, const UnsignedInt& _Secnd)noexcept;
        friend inline void mulx(UnsignedInt& _Answ, const UnsignedInt& _First, const UnsignedInt& _Secnd)noexcept;
        friend inline void addi(UnsignedInt& _Answ, const UnsignedInt& _First, const UnsignedInt& _Secnd)noexcept;
        friend inline void mulm(UnsignedInt& _Answ, const UnsignedInt& _First, const UnsignedInt& _Secnd)noexcept;

        UnsignedInt()noexcept;
        UnsignedInt(const _Stype _Size)noexcept;
        UnsignedInt(const longInitializer& _List)noexcept;
        UnsignedInt(UnsignedInt&& _That)noexcept;
        UnsignedInt(const UnsignedInt& _That)noexcept;

        ~UnsignedInt()noexcept;

        constexpr UnsignedInt& operator=(const _Stype _Size)noexcept;
        constexpr UnsignedInt& operator=(const longInitializer& _That)noexcept;
        constexpr UnsignedInt& operator=(UnsignedInt&& _That)noexcept;
        constexpr UnsignedInt& operator=(const UnsignedInt& _That)noexcept;


        [[nodiscard]] constexpr bool operator==(const UnsignedInt& _That)const noexcept;
        [[nodiscard]] constexpr bool operator!=(const UnsignedInt& _That)const noexcept;
        [[nodiscard]] constexpr bool operator> (const UnsignedInt& _That)const noexcept;
        [[nodiscard]] constexpr bool operator< (const UnsignedInt& _That)const noexcept;
        [[nodiscard]] constexpr bool operator>=(const UnsignedInt& _That)const noexcept;
        [[nodiscard]] constexpr bool operator<=(const UnsignedInt& _That)const noexcept;


        constexpr UnsignedInt& operator<<=(const _Stype _Shift)noexcept;
        constexpr UnsignedInt& operator>>=(const _Stype _Shift)noexcept;

        constexpr UnsignedInt& operator|=(const UnsignedInt& _That)noexcept;
        constexpr UnsignedInt& operator&=(const UnsignedInt& _That)noexcept;
        constexpr UnsignedInt& operator^=(const UnsignedInt& _That)noexcept;
        constexpr UnsignedInt& operator+=(const UnsignedInt& _That)noexcept;
        constexpr UnsignedInt& operator-=(const UnsignedInt& _That)noexcept;
        constexpr UnsignedInt& operator*=(const UnsignedInt& _That)noexcept;
        constexpr UnsignedInt& operator/=(const UnsignedInt& _That)noexcept;
        constexpr UnsignedInt& operator%=(const UnsignedInt& _That)noexcept;


        [[nodiscard]] UnsignedInt operator<<(const _Stype that)const noexcept;
        [[nodiscard]] UnsignedInt operator>>(const _Stype that)const noexcept;
        [[nodiscard]] UnsignedInt operator|(const UnsignedInt& _That)const noexcept;
        [[nodiscard]] UnsignedInt operator&(const UnsignedInt& _That)const noexcept;
        [[nodiscard]] UnsignedInt operator^(const UnsignedInt& _That)const noexcept;
        [[nodiscard]] UnsignedInt operator+(const UnsignedInt& _That)const noexcept;
        [[nodiscard]] UnsignedInt operator-(const UnsignedInt& _That)const noexcept;

    private:
        struct UnsignedIntImpl;
        UnsignedIntImpl* _Impl;
    };
}