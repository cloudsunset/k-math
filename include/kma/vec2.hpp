#pragma once
#include "kma_common.hpp"

namespace kma
{
	struct vec2
	{

		KMA_INLINE vec2()
		{
			v = setzero_ps();
		}

		KMA_INLINE vec2(float uX, float uY)
		{
			v = set_ps(0, 0, uY, uX);
		}

		KMA_INLINE vec2(m128 iv)
		{
			v = iv;
		}

		KMA_INLINE vec2 operator+(const vec2& ivec)	const
		{
			return vec2(add_ps(v, ivec.v));
		}

		KMA_INLINE vec2 operator-(const vec2& ivec)	const
		{
			return vec2(sub_ps(v, ivec.v));
		}

		KMA_INLINE vec2 operator*(const vec2& ivec) const
		{
			return vec2(mul_ps(v, ivec.v));
		}

		KMA_INLINE vec2 operator*(const float s) const
		{
			return vec2(mul_ps(v, set1_ps(s)));
		}

		KMA_INLINE vec2 operator/(const vec2& ivec)	const
		{
			return vec2(div_ps(v, ivec.v));
		}

		KMA_INLINE vec2& operator=(const vec2& ivec)
		{
			v = ivec.v;
			return *this;
		}

		KMA_INLINE vec2 Add(const vec2& a, const vec2& b) const
		{
			return vec2(add_ps(a.v, b.v));
		}

		KMA_INLINE vec2 Sub(const vec2& a, const vec2& b) const
		{
			return vec2(sub_ps(a.v, b.v));
		}

		KMA_INLINE vec2 Mul(const vec2& a, const vec2& b) const
		{
			return vec2(mul_ps(a.v, b.v));
		}

		KMA_INLINE vec2 Mul(const vec2& a, const float s) const
		{
			return vec2(mul_ps(a.v, set1_ps(s)));
		}

		KMA_INLINE vec2 Div(const vec2& a, const vec2& b) const
		{
			return vec2(div_ps(a.v, b.v));
		}

		vec2 normalize()
		{
			m128 s = mul_ps(v, v);
			m128 res = hadd_ps(s, s);
			m128 InverseSqrt = rsqrt_ps(hadd_ps(res, res));
			m128 norm = mul_ps(v, InverseSqrt);
			return norm;
		}

		union
		{
			struct
			{
				float x;
				float y;
				float z;
				float w;
			};
			m128 v;
		};
	};

}