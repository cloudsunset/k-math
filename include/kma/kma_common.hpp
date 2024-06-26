#pragma once
#include <immintrin.h>
#include <xmmintrin.h>
#include <smmintrin.h>

#define KMA_INLINE __forceinline

#define setzero_ps _mm_setzero_ps
#define set_ps _mm_set_ps
#define add_ps _mm_add_ps
#define sub_ps _mm_sub_ps
#define mul_ps _mm_mul_ps
#define div_ps _mm_div_ps
#define hadd_ps _mm_hadd_ps
#define rsqrt_ps _mm_rsqrt_ps
#define cvtss_f32 _mm_cvtss_f32
#define shuffle_ps _mm_shuffle_ps
#define set1_ps _mm_set1_ps
#define insert_ps _mm_insert_ps
#define set_ss _mm_set_ss
#define sqrt_ps _mm_sqrt_ps
#define xor_ps _mm_xor_ps
#define set_epi32 _mm_set_epi32
#define castsi128_ps _mm_castsi128_ps
#define dp_ps _mm_dp_ps

namespace kma
{
	typedef __m128 m128;
	typedef __m128i m128i;

}