export module initializer;


export namespace alpha {
    template <class _Ty>
    class initializer_list {
    public:
        using ArrayTy = _Ty;
        using _RefTy = const _Ty&;
        using const_reference = const _Ty&;
        using _SizTy = unsigned long long;

        using iterator = const _Ty*;
        using const_iterator = const _Ty*;

        constexpr initializer_list() noexcept : _First(nullptr), _Last(nullptr) {}

        constexpr initializer_list(const _Ty* _First, const _Ty* _Last)noexcept
            : _First(_First), _Last(_Last) {}

        [[nodiscard]] constexpr const _Ty* begin()const noexcept {
            return _First;
        }

        [[nodiscard]] constexpr const _Ty* end()const noexcept {
            return _Last;
        }

        [[nodiscard]] constexpr size_t size() const noexcept {
            return static_cast<size_t>(_Last - _First);
        }

    private:
        const _Ty* _First;
        const _Ty* _Last;
    };

    template <class _Ty>
    [[nodiscard]] constexpr const _Ty* begin(initializer_list<_Ty> _Ilist) noexcept {
        return _Ilist.begin();
    }

    template <class _Ty>
    [[nodiscard]] constexpr const _Ty* end(initializer_list<_Ty> _Ilist) noexcept {
        return _Ilist.end();
    }

    template<class _Ty> using initializer = initializer_list<_Ty>;
}





