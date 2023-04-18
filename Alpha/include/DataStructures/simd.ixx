module;
#include <immintrin.h>
#include <intrin.h>
export module simd;

export namespace alpha {

#ifdef __AVX512F__
#define __mxi          __m512i
#define __mx           __m512
#define __mxd          __m512d

#define _mmx_set1_ps   _mm512_set1_ps

#define _mmx_load_six  _mm512_loadu_si512
#define _mmx_load_ps   _mm512_load_ps
#define _mmx_load_pd   _mm512_load_pd

#define _mmx_add_ps    _mm512_add_ps
#define _mmx_add_pd    _mm512_add_pd
#define _mmx_sub_ps    _mm512_sub_ps
#define _mmx_sub_ps    _mm512_sub_pd

#define _mmx_store_six _mm512_storeu_si512
#define _mmx_store_ps  _mm512_storeu_ps
#define _mmx_store_pd  _mm512_storeu_pd

#define _mmx_fmadd_ps   _mm512_fmadd_ps
#define _mmx_fnmadd_ps  _mm512_fnmadd_ps

#elif __AVX2__
#define __mx           __m256
#define __mxd          __m256d

#define _mmx_set1_ps   _mm256_set1_ps
#define _mmx_set1_pd   _mm256_set1_pd

#define _mmx_load_ps   _mm256_loadu_ps
#define _mmx_load_pd   _mm256_load_pd

#define _mmx_add_ps    _mm256_add_ps
#define _mmx_add_pd    _mm256_add_pd
#define _mmx_sub_ps    _mm256_sub_ps
#define _mmx_sub_pd    _mm256_sub_pd
#define _mmx_mul_ps    _mm256_mul_ps
#define _mmx_mul_pd    _mm256_mul_pd
#define _mmx_div_ps    _mm256_div_ps
#define _mmx_div_pd    _mm256_div_pd

#define _mmx_store_ps  _mm256_store_ps
#define _mmx_store_pd  _mm256_store_pd

#define _mmx_fmadd_ps  _mm256_fmadd_ps
#define _mmx_fmadd_pd  _mm256_fmadd_pd
#define _mmx_fnmadd_ps _mm256_fnmadd_ps
#define _mmx_fnmadd_pd _mm256_fnmadd_pd

#else
#define NOSIMD
#endif

    void avx_add_vecf (const float* const A, const float* const B, float* const C, const size_t _Count) {
#ifdef NOSIMD
        for (size_t i = 0; i < _Count; ++i)
            C[i] = A[i] + B[i];
#else
        const size_t _chunksize = sizeof(__mx) / sizeof(float);
        const size_t _chunkcount = _Count / _chunksize;
        size_t i = 0;

        for (; i < _chunkcount; ++i) {
            auto _a = _mmx_load_ps(A + i * _chunksize);
            auto _b = _mmx_load_ps(B + i * _chunksize);
            auto _c = _mmx_add_ps(_a, _b);
            _mmx_store_ps(C + i * _chunksize, _c);
        }
        for (i *= _chunksize; i < _Count; ++i)
            C[i] = A[i] + B[i];
#endif
    }
    void avx_sub_vecf (const float* const A, const float* const B, float* const C, const size_t _Count) {
#ifdef NOSIMD
        for (size_t i = 0; i < _Count; ++i)
            C[i] = A[i] - B[i];
#else
        const size_t _chunksize = sizeof(__mx) / sizeof(float);
        const size_t _chunkcount = _Count / _chunksize;
        size_t i = 0;

        for (; i < _chunkcount; ++i) {
            auto _a = _mmx_load_ps(A + i * _chunksize);
            auto _b = _mmx_load_ps(B + i * _chunksize);
            auto _c = _mmx_sub_ps(_a, _b);
            _mmx_store_ps(C + i * _chunksize, _c);
        }
        for (i *= _chunksize; i < _Count; ++i)
            C[i] = A[i] - B[i];
#endif
    }
    void avx_madd_vecf(const float* const A, const float* const B, float* const C, const size_t _Count, const float _Lamda = 1)noexcept {
#ifdef NOSIMD
        for (size_t i = 0; i < _Count; ++i)
            C[i] = A[i] + _Lamda * B[i];
#else
        const size_t _chunksize = sizeof(__mx) / sizeof(float);
        const size_t _chunkcount = _Count / _chunksize;
        size_t i = 0;
        const __mx lamda = _mmx_set1_ps(_Lamda);
        for (; i < _chunkcount; ++i) {
            auto _a = _mmx_load_ps(A + i * _chunksize);
            auto _b = _mmx_load_ps(B + i * _chunksize);
            auto _c = _mmx_fmadd_ps(_b, lamda, _a);
            _mmx_store_ps(C + i * _chunksize, _c);
        }
        for (i *= _chunksize; i < _Count; ++i)
            C[i] = A[i] + _Lamda * B[i];
#endif
    }
    void avx_msub_vecf(const float* const A, const float* const B, float* const C, const size_t _Count, const float _Lamda = 1)noexcept {
#ifdef NOSIMD
        for (size_t i = 0; i < _Count; ++i)
            C[i] = A[i] - _Lamda * B[i];
#else
        const size_t _chunksize = sizeof(__mx) / sizeof(float);
        const size_t _chunkcount = _Count / _chunksize;
        size_t i = 0;
        const __mx lamda = _mmx_set1_ps(_Lamda);
        for (; i < _chunkcount; ++i) {
            auto _a = _mmx_load_ps(A + i * _chunksize);
            auto _b = _mmx_load_ps(B + i * _chunksize);
            auto _c = _mmx_fnmadd_ps(_b, lamda, _a);
            _mmx_store_ps(C + i * _chunksize, _c);
        }
        for (i *= _chunksize; i < _Count; ++i)
            C[i] = A[i] - _Lamda * B[i];
#endif
    }
    void avx_mul_vecf (float* const _Vec, const float _Scalar, const size_t _Count) {
#ifdef NOSIMD
        for (size_t i = 0; i < _Count; ++i)
            _Vec[i] *= _Scalar;
#else
        constexpr const size_t _chunksize = sizeof(__mx) / sizeof(float);
                  const size_t _Range = _Count - (_chunksize - 1);
        size_t i = 0;
        const __mx lamda = _mmx_set1_ps(_Scalar);
        for (; i < _Range; i += _chunksize) {
            auto _a = _mmx_load_ps(_Vec + i);
            _a = _mmx_mul_ps(_a, lamda);
            _mmx_store_ps(_Vec + i, _a);
        }
        for (; i < _Count; ++i) {
            _Vec[i] *= _Scalar;
        }
#endif
    }

    void avx_add_vecd (const double* const A, const double* const B, double* const C, const size_t _Count) {
#ifdef NOSIMD
        for (size_t i = 0; i < _Count; ++i)
            C[i] = A[i] + B[i];
#else
        const size_t _chunksize = sizeof(__mxd) / sizeof(double);
        const size_t _chunkcount = _Count / _chunksize;
        size_t i = 0;

        for (; i < _chunkcount; i++) {
            auto va = _mmx_load_pd(A + i * _chunksize);
            auto vb = _mmx_load_pd(B + i * _chunksize);
            auto vc = _mmx_add_pd(va, vb);
            _mmx_store_pd(C + i * _chunksize, vc);
        }
        for (i *= _chunksize; i < _Count; i++)
            C[i] = A[i] + B[i];
#endif
    }
    void avx_sub_vecd (const double* const A, const double* const B, double* const C, const size_t _Count) {
#ifdef NOSIMD
        for (size_t i = 0; i < _Count; ++i)
            C[i] = A[i] - B[i];
#else
        const size_t _chunksize = sizeof(__mxd) / sizeof(double);
        const size_t _chunkcount = _Count / _chunksize;
        size_t i = 0;

        for (; i < _chunkcount; i++) {
            auto va = _mmx_load_pd(A + i * _chunksize);
            auto vb = _mmx_load_pd(B + i * _chunksize);
            auto vc = _mmx_sub_pd(va, vb);
            _mmx_store_pd(C + i * _chunksize, vc);
        }
        for (i *= _chunksize; i < _Count; i++)
            C[i] = A[i] - B[i];
#endif
    }
    void avx_madd_vecd(const double* const A, const double* const B, double* const C, const size_t _Count, const double _Lamda = 1)noexcept {
#ifdef NOSIMD
        for (size_t i = 0; i < _Count; ++i)
            C[i] = A[i] + _Lamda * B[i];
#else
        const size_t _chunksize = sizeof(__mxd) / sizeof(float);
        const size_t _chunkcount = _Count / _chunksize;
        size_t i = 0;
        const __mxd lamda = _mmx_set1_pd(_Lamda);
        for (; i < _chunkcount; ++i) {
            auto _a = _mmx_load_pd(A + i * _chunksize);
            auto _b = _mmx_load_pd(B + i * _chunksize);
            auto _c = _mmx_fmadd_pd(_b, lamda, _a);
            _mmx_store_pd(C + i * _chunksize, _c);
        }
        for (i *= _chunksize; i < _Count; ++i)
            C[i] = A[i] + _Lamda * B[i];
#endif
    }
    void avx_msub_vecd(const double* const A, const double* const B, double* const C, const size_t _Count, const double _Lamda = 1)noexcept {
#ifdef NOSIMD
        for (size_t i = 0; i < _Count; ++i)
            C[i] = A[i] - _Lamda * B[i];
#else
        const size_t _chunksize = sizeof(__mxd) / sizeof(float);
        const size_t _chunkcount = _Count / _chunksize;
        size_t i = 0;
        const __mxd lamda = _mmx_set1_pd(_Lamda);
        for (; i < _chunkcount; ++i) {
            auto _a = _mmx_load_pd(A + i * _chunksize);
            auto _b = _mmx_load_pd(B + i * _chunksize);
            auto _c = _mmx_fnmadd_pd(_b, lamda, _a);
            _mmx_store_pd(C + i * _chunksize, _c);
        }
        for (i *= _chunksize; i < _Count; ++i)
            C[i] = A[i] - _Lamda * B[i];
#endif
    }
    void avx_mul_vecd(double* const _Vec, const double _Scalar, const size_t _Count) {
#ifdef NOSIMD
        for (size_t i = 0; i < _Count; ++i)
            _Vec[i] *= _Scalar;
#else
        constexpr const size_t _chunksize = sizeof(__mxd) / sizeof(double);
        const size_t _Range = _Count - (_chunksize - 1);
        size_t i = 0;
        const __mxd lamda = _mmx_set1_pd(_Scalar);
        for (; i < _Range; i += _chunksize) {
            auto _a = _mmx_load_pd(_Vec + i);
            _a = _mmx_mul_pd(_a, lamda);
            _mmx_store_pd(_Vec + i, _a);
        }
        for (; i < _Count; ++i) {
            _Vec[i] *= _Scalar;
        }
#endif
    }

}       