module;
#undef _DLL
#include <sal.h>
#include <corecrt_stdio_config.h>
#include <vadefs.h>
#include <vcruntime.h>
#include <apisetcconv.h>

export module core;
export constexpr const auto uint32_max = 0xffffffffui32;
export constexpr const auto uint64_max = 0xffffffffffffffffui64;

#if _DEBUG
	export constexpr auto const _debug = true;
#else
	export constexpr auto const _debug = false;
#endif
    export constexpr auto const __specialcompiler = false;

extern "C" {
#define DECLARE_HANDLE(name) struct name##__{int unused;}; typedef struct name##__ *name
#define STD_OUTPUT_HANDLE   ((DWORD)-11)
    DECLARE_HANDLE(HINSTANCE);

    typedef unsigned long DWORD;
    export typedef HINSTANCE HMODULE;
    typedef int BOOL;
    typedef wchar_t WCHAR;
    typedef char CHAR;
    typedef _Null_terminated_ const WCHAR* LPCWSTR, * PCWSTR;
    typedef _Null_terminated_ const CHAR* LPCSTR, * PCSTR;

    typedef void* HANDLE;
    typedef short SHORT;
    typedef struct _COORD {
        SHORT X;
        SHORT Y;
    } COORD, * PCOORD;


    //WINBASEAPI
    HANDLE
        __stdcall
        GetStdHandle(
            _In_ DWORD nStdHandle
        );

    //WINBASEAPI
    BOOL
        __stdcall
        SetConsoleCursorPosition(
            _In_ HANDLE hConsoleOutput,
            _In_ COORD dwCursorPosition
        );
}

   

   
_CRT_BEGIN_C_HEADER



export
//WINBASEAPI
BOOL
__stdcall
FreeLibrary(
    _In_ HMODULE hLibModule
);
export
//WINBASEAPI
_Ret_maybenull_
HMODULE
__stdcall
LoadLibraryW(
    _In_ LPCWSTR lpLibFileName
);


typedef __int64 INT_PTR, * PINT_PTR;
typedef INT_PTR(__stdcall* FARPROC)();

export
//WINBASEAPI
FARPROC
__stdcall
GetProcAddress(
    _In_ HMODULE hModule,
    _In_ LPCSTR lpProcName
);

//**********************************************************************stdio.h************

#ifndef _FILE_DEFINED
#define _FILE_DEFINED
typedef struct _iobuf
{
    void* _Placeholder;
} FILE;
#endif

export
_ACRTIMP_ALT FILE* __cdecl __acrt_iob_func(unsigned _Ix);

#define stdin  (__acrt_iob_func(0))
#define stdout (__acrt_iob_func(1))
#define stderr (__acrt_iob_func(2))

#define WEOF ((wint_t)(0xFFFF))

export FILE* console = __acrt_iob_func(1);

export
_Success_(return != EOF)
_Check_return_opt_
_ACRTIMP int __cdecl putc(
    _In_    int   _Character,
    _Inout_ FILE * _Stream
);

export
_Check_return_opt_
_ACRTIMP int __cdecl putchar(
    _In_ int _Character
);

export
_Check_return_opt_
_ACRTIMP int __cdecl puts(
    _In_z_ char const* _Buffer
);


export
_Success_(return != EOF)
_Check_return_opt_
_ACRTIMP int __cdecl fputs(
    _In_z_  char const* _Buffer,
    _Inout_ FILE * _Stream
);

export
_ACRTIMP int __cdecl __stdio_common_vsscanf(
        _In_                                   unsigned __int64 _Options,
        _In_reads_(_BufferCount) _Pre_z_       char const* _Buffer,
        _In_                                   size_t           _BufferCount,
        _In_z_ _Scanf_format_string_params_(2) char const* _Format,
        _In_opt_                               _locale_t        _Locale,
        va_list          _ArgList
    );

export
_Check_return_opt_
_CRT_STDIO_INLINE
int __CRTDECL _vsscanf_s_l(
    _In_z_                        char const* const _Buffer,
    _In_z_ _Printf_format_string_ char const* const _Format,
    _In_opt_                      _locale_t   const _Locale,
    va_list           _ArgList
)

#if defined _NO_CRT_STDIO_INLINE
        ;
#else
    {
        return __stdio_common_vsscanf(
            _CRT_INTERNAL_LOCAL_SCANF_OPTIONS | _CRT_INTERNAL_SCANF_SECURECRT,
            _Buffer, (size_t)-1, _Format, _Locale, _ArgList);
    }
#endif

#pragma warning(push)
#pragma warning(disable: 6530) // Unrecognized SAL format string

export
_Check_return_opt_
_CRT_STDIO_INLINE
int __CRTDECL vsscanf_s(
    _In_z_                        char const* const _Buffer,
    _In_z_ _Printf_format_string_ char const* const _Format,
    va_list           _ArgList
)
#if defined _NO_CRT_STDIO_INLINE
        ;
#else
    {
        return _vsscanf_s_l(_Buffer, _Format, NULL, _ArgList);
    }
#endif

#if __STDC_WANT_SECURE_LIB__

export
_Check_return_opt_
_CRT_STDIO_INLINE
int __CRTDECL sscanf_s(
    _In_z_                         char const* const _Buffer,
    _In_z_ _Scanf_s_format_string_ char const* const _Format,
    ...)
#if defined _NO_CRT_STDIO_INLINE // SCANF
    ;
#else
{
    int _Result;
    va_list _ArgList;
    __crt_va_start(_ArgList, _Format);

    _Result = vsscanf_s(_Buffer, _Format, _ArgList);

    __crt_va_end(_ArgList);
    return _Result;
}
#endif

#endif


//***************************************string************************************************
export
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Count * _Size)
_ACRTIMP _CRT_JIT_INTRINSIC _CRTALLOCATOR _CRTRESTRICT _CRT_HYBRIDPATCHABLE
void* __cdecl calloc(
    _In_ _CRT_GUARDOVERFLOW size_t _Count,
    _In_ _CRT_GUARDOVERFLOW size_t _Size
);

export
_Success_(return != 0) _Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size)
_ACRTIMP _CRTALLOCATOR _CRTRESTRICT _CRT_HYBRIDPATCHABLE
void* __cdecl realloc(
    _Pre_maybenull_ _Post_invalid_ void* _Block,
    _In_ _CRT_GUARDOVERFLOW        size_t _Size
);

export
_ACRTIMP _CRT_HYBRIDPATCHABLE
void __cdecl free(
    _Pre_maybenull_ _Post_invalid_ void* _Block
);

export
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size)
_ACRTIMP _CRTALLOCATOR _CRT_JIT_INTRINSIC _CRTRESTRICT _CRT_HYBRIDPATCHABLE
void* __cdecl malloc(
    _In_ _CRT_GUARDOVERFLOW size_t _Size
);

export
_CRT_INSECURE_DEPRECATE_MEMORY(memcpy_s)
_Post_equal_to_(_Dst)
_At_buffer_(
    (unsigned char*)_Dst,
    _Iter_,
    _Size,
    _Post_satisfies_(((unsigned char*)_Dst)[_Iter_] == ((unsigned char*)_Src)[_Iter_])
)
void* __cdecl memcpy(
    _Out_writes_bytes_all_(_Size) void* _Dst,
    _In_reads_bytes_(_Size)       void const* _Src,
    _In_                          size_t      _Size
);


export
_CRT_INSECURE_DEPRECATE_MEMORY(memmove_s)
    _VCRTIMP void* __cdecl memmove(
        _Out_writes_bytes_all_opt_(_Size) void* _Dst,
        _In_reads_bytes_opt_(_Size)       void const* _Src,
        _In_                              size_t      _Size
    );


export
_Post_equal_to_(_Dst)
    _At_buffer_(
        (unsigned char*)_Dst,
        _Iter_,
        _Size,
        _Post_satisfies_(((unsigned char*)_Dst)[_Iter_] == _Val)
    ) void* __cdecl memset(
        _Out_writes_bytes_all_(_Size) void* _Dst,
        _In_                          int    _Val,
        _In_                          size_t _Size
    );

export
_NODISCARD _Check_return_
int __cdecl memcmp(
    _In_reads_bytes_(_Size) void const* _Buf1,
    _In_reads_bytes_(_Size) void const* _Buf2,
    _In_                    size_t      _Size
);

export
_Check_return_
size_t __cdecl strlen(
    _In_z_ char const* _Str
);

export
_Check_return_
int __cdecl strcmp(
    _In_z_ char const* _Str1,
    _In_z_ char const* _Str2
);

export
_Check_return_
_ACRTIMP int __cdecl strncmp(
    _In_reads_or_z_(_MaxCount) char const* _Str1,
    _In_reads_or_z_(_MaxCount) char const* _Str2,
    _In_                       size_t      _MaxCount
);

export
_NODISCARD _Check_return_ _Ret_maybenull_
_VCRTIMP char _CONST_RETURN* __cdecl strstr(
    _In_z_ char const* _Str,
    _In_z_ char const* _SubStr
);

_CRT_END_C_HEADER


extern "C" {

	export char* __cdecl gcvt(
		double _Value,
		int    _DigitCount,
		char* _DstBuf
	);

	export int __cdecl system(char const* _Command);
	export void __cdecl exit(int _Code);
}

namespace alpha {
    export inline void clearconsole() {
        COORD cursorPosition;
        cursorPosition.X = 0;
        cursorPosition.Y = 0;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
    }
}