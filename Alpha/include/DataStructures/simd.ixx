module;
#include <immintrin.h>
#include <intrin.h>
export module simd;

export namespace alpha {

    // Check if SSE is supported
    bool checkSSESupport() {
        int info[4];
        __cpuid(info, 1);
        return (info[3] & (1 << 25)) != 0;
    }

    // Check if AVX is supported
    bool checkAVXSupport() {
        int info[4];
        __cpuid(info, 1);
        return (info[2] & (1 << 28)) != 0;
    }

    // Check if AVX2 is supported
    bool checkAVX2Support() {
        int info[4];
        __cpuid(info, 1);
        return (info[2] & (1 << 5)) != 0;
    }

    // Check if AVX-512F is supported
    bool checkAVX512FSupport() {
        int info[4];
        __cpuid(info, 7);
        return (info[1] & (1 << 16)) != 0;
    }

    // Check if AVX-512DQ is supported
    bool checkAVX512DQSupport() {
        int info[4];
        __cpuid(info, 7);
        return (info[1] & (1 << 17)) != 0;
    }

    // Check if AVX-512CD is supported
    bool checkAVX512CDSupport() {
        int info[4];
        __cpuid(info, 7);
        return (info[1] & (1 << 28)) != 0;
    }

    // Check if AVX-512BW is supported
    bool checkAVX512BWSupport() {
        int info[4];
        __cpuid(info, 7);
        return (info[1] & (1 << 30)) != 0;
    }

    // Check if AVX-512VL is supported
    bool checkAVX512VLSupport() {
        int info[4];
        __cpuid(info, 7);
        return (info[1] & (1 << 31)) != 0;
    }

#ifdef __AVX512F__
#define __mxi          __m512i
#define __mx           __m512
#define _mmx_load_six  _mm512_loadu_si512
#define _mmx_load_ps   _mm512_load_ps
#define _mmx_add_epi32 _mm512_add_epi32
#define _mmx_add_ps    _mm512_add_ps
#define _mmx_store_six _mm512_storeu_si512
#define _mmx_store_ps  _mm512_storeu_ps

#elif __AVX2__
#define __mxi          __m256i
#define __mx           __m256
#define _mmx_load_six  _mm256_load_si256
#define _mmx_load_ps   _mm256_load_ps
#define _mmx_add_epi32 _mm256_add_epi32
#define _mmx_add_ps    _mm256_add_ps
#define _mmx_store_six _mm256_store_si256
#define _mmx_store_ps  _mm256_store_ps

#else
#define NOSIMD
#endif


    void _simd_add_vector_uint32(const unsigned int* const A, const unsigned int* const B, unsigned int* const C, const unsigned long long Count) noexcept {
#ifdef NOSIMD
        for (size_t i = 0; i < Count; ++i)
            C[i] = A[i] + B[i];
        _mm256_load_
#else
        const size_t ChunkSize = sizeof(__mxi) / sizeof(unsigned int);
        const size_t Size = Count / ChunkSize;
        size_t i = 0;
        const __mxi * avx_a = reinterpret_cast<const __mxi *>(A);
        const __mxi * avx_b = reinterpret_cast<const __mxi *>(B);
        __mxi * avx_c = (__mxi *)C;

        for (; i < Size; ++i) {
            auto _a = _mmx_load_six(avx_a + i);
            auto _b = _mmx_load_six(avx_b + i);
            auto _c = _mmx_add_epi32(_a, _b);
            _mmx_store_six(avx_c + i, _c);
        }

        for (i *= ChunkSize; i < Count; ++i)
            C[i] = A[i] + B[i];
#endif
    }

    void _simd_add_vector_float(const float* const A, const float* const B, float* const C, const size_t Count) {
#ifdef NOSIMD
        for (size_t i = 0; i < Count; ++i)
            C[i] = A[i] + B[i];
#else
        const size_t ChunkSize = sizeof(__mx) / sizeof(float);
        const size_t Size = Count / ChunkSize;
        size_t i = 0;

        for (; i < Size; ++i) {
            auto _a = _mmx_load_ps(A + i * ChunkSize);
            auto _b = _mmx_load_ps(B + i * ChunkSize);
            auto _c = _mmx_add_ps(_a, _b);
            _mmx_store_ps(C + i * ChunkSize, _c);
        }
        
        for (i *= ChunkSize; i < Count; ++i)
            C[i] = A[i] + B[i];
#endif
    }

}       