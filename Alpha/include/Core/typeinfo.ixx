export module typeinfo;

extern "C++" {
    struct __type_info_node;
    extern __type_info_node __type_info_root_node;
}

extern "C" {

    struct __std_type_info_data {
        const char* _UndecoratedName;
        const char   _DecoratedName[1];
        __std_type_info_data() = delete;
        __std_type_info_data(const __std_type_info_data&) = delete;
        __std_type_info_data(__std_type_info_data&&) = delete;

        __std_type_info_data& operator=(const __std_type_info_data&) = delete;
        __std_type_info_data& operator=(__std_type_info_data&&) = delete;
    };

    int __cdecl __std_type_info_compare(
        const __std_type_info_data* _Lhs,
        const __std_type_info_data* _Rhs
    );

    size_t __cdecl __std_type_info_hash(
        const __std_type_info_data* _Data
    );

    const char* __cdecl __std_type_info_name(
        __std_type_info_data* _Data,
        __type_info_node* _RootNode
    );
}

extern "C++" {
    export class type_info {
    public:

        type_info(const type_info&) = delete;
        type_info& operator=(const type_info&) = delete;

        [[nodiscard]] size_t hash_code() const noexcept {
            return __std_type_info_hash(&_Data);
        }

        [[nodiscard]] constexpr bool operator==(const type_info& _Other) const noexcept {
            if (__builtin_is_constant_evaluated()) {
                return &_Data == &_Other._Data;
            }
            return __std_type_info_compare(&_Data, &_Other._Data) == 0;
        }

        [[nodiscard]] bool before(const type_info& _Other) const noexcept {
            return __std_type_info_compare(&_Data, &_Other._Data) < 0;
        }

        [[nodiscard]] const char* name() const noexcept {
            return __std_type_info_name(&_Data, &__type_info_root_node);
        }

        [[nodiscard]] const char* raw_name() const noexcept {
            return _Data._DecoratedName;
        }

        virtual ~type_info() noexcept;

    private:

        mutable __std_type_info_data _Data;
    };
   
}

export template<typename _Ty>
const char* typeof = typeid(_Ty).name();