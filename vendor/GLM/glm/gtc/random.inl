#include "../geometric.hpp"
#include "../exponential.hpp"
#include "../trigonometric.hpp"
#include "../detail/type_vec1.hpp"
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <cmath>

namespace glm{
namespace detail
{
	template <length_t L, typename _Ty, qualifier Q>
	struct compute_rand
	{
		GLM_FUNC_QUALIFIER static vec<L, _Ty, Q> call();
	};

	template <qualifier P>
	struct compute_rand<1, uint8, P>
	{
		GLM_FUNC_QUALIFIER static vec<1, uint8, P> call()
		{
			return vec<1, uint8, P>(
				static_cast<uint8>(std::rand() % std::numeric_limits<uint8>::max()));
		}
	};

	template <qualifier P>
	struct compute_rand<2, uint8, P>
	{
		GLM_FUNC_QUALIFIER static vec<2, uint8, P> call()
		{
			return vec<2, uint8, P>(
				std::rand() % std::numeric_limits<uint8>::max(),
				std::rand() % std::numeric_limits<uint8>::max());
		}
	};

	template <qualifier P>
	struct compute_rand<3, uint8, P>
	{
		GLM_FUNC_QUALIFIER static vec<3, uint8, P> call()
		{
			return vec<3, uint8, P>(
				std::rand() % std::numeric_limits<uint8>::max(),
				std::rand() % std::numeric_limits<uint8>::max(),
				std::rand() % std::numeric_limits<uint8>::max());
		}
	};

	template <qualifier P>
	struct compute_rand<4, uint8, P>
	{
		GLM_FUNC_QUALIFIER static vec<4, uint8, P> call()
		{
			return vec<4, uint8, P>(
				std::rand() % std::numeric_limits<uint8>::max(),
				std::rand() % std::numeric_limits<uint8>::max(),
				std::rand() % std::numeric_limits<uint8>::max(),
				std::rand() % std::numeric_limits<uint8>::max());
		}
	};

	template <length_t L, qualifier Q>
	struct compute_rand<L, uint16, Q>
	{
		GLM_FUNC_QUALIFIER static vec<L, uint16, Q> call()
		{
			return
				(vec<L, uint16, Q>(compute_rand<L, uint8, Q>::call()) << static_cast<uint16>(8)) |
				(vec<L, uint16, Q>(compute_rand<L, uint8, Q>::call()) << static_cast<uint16>(0));
		}
	};

	template <length_t L, qualifier Q>
	struct compute_rand<L, uint32, Q>
	{
		GLM_FUNC_QUALIFIER static vec<L, uint32, Q> call()
		{
			return
				(vec<L, uint32, Q>(compute_rand<L, uint16, Q>::call()) << static_cast<uint32>(16)) |
				(vec<L, uint32, Q>(compute_rand<L, uint16, Q>::call()) << static_cast<uint32>(0));
		}
	};

	template <length_t L, qualifier Q>
	struct compute_rand<L, uint64, Q>
	{
		GLM_FUNC_QUALIFIER static vec<L, uint64, Q> call()
		{
			return
				(vec<L, uint64, Q>(compute_rand<L, uint32, Q>::call()) << static_cast<uint64>(32)) |
				(vec<L, uint64, Q>(compute_rand<L, uint32, Q>::call()) << static_cast<uint64>(0));
		}
	};

	template <length_t L, typename _Ty, qualifier Q>
	struct compute_linearRand
	{
		GLM_FUNC_QUALIFIER static vec<L, _Ty, Q> call(vec<L, _Ty, Q> const& Min, vec<L, _Ty, Q> const& Max);
	};

	template<length_t L, qualifier Q>
	struct compute_linearRand<L, int8, Q>
	{
		GLM_FUNC_QUALIFIER static vec<L, int8, Q> call(vec<L, int8, Q> const& Min, vec<L, int8, Q> const& Max)
		{
			return (vec<L, int8, Q>(compute_rand<L, uint8, Q>::call() % vec<L, uint8, Q>(Max + static_cast<int8>(1) - Min))) + Min;
		}
	};

	template<length_t L, qualifier Q>
	struct compute_linearRand<L, uint8, Q>
	{
		GLM_FUNC_QUALIFIER static vec<L, uint8, Q> call(vec<L, uint8, Q> const& Min, vec<L, uint8, Q> const& Max)
		{
			return (compute_rand<L, uint8, Q>::call() % (Max + static_cast<uint8>(1) - Min)) + Min;
		}
	};

	template<length_t L, qualifier Q>
	struct compute_linearRand<L, int16, Q>
	{
		GLM_FUNC_QUALIFIER static vec<L, int16, Q> call(vec<L, int16, Q> const& Min, vec<L, int16, Q> const& Max)
		{
			return (vec<L, int16, Q>(compute_rand<L, uint16, Q>::call() % vec<L, uint16, Q>(Max + static_cast<int16>(1) - Min))) + Min;
		}
	};

	template<length_t L, qualifier Q>
	struct compute_linearRand<L, uint16, Q>
	{
		GLM_FUNC_QUALIFIER static vec<L, uint16, Q> call(vec<L, uint16, Q> const& Min, vec<L, uint16, Q> const& Max)
		{
			return (compute_rand<L, uint16, Q>::call() % (Max + static_cast<uint16>(1) - Min)) + Min;
		}
	};

	template<length_t L, qualifier Q>
	struct compute_linearRand<L, int32, Q>
	{
		GLM_FUNC_QUALIFIER static vec<L, int32, Q> call(vec<L, int32, Q> const& Min, vec<L, int32, Q> const& Max)
		{
			return (vec<L, int32, Q>(compute_rand<L, uint32, Q>::call() % vec<L, uint32, Q>(Max + static_cast<int32>(1) - Min))) + Min;
		}
	};

	template<length_t L, qualifier Q>
	struct compute_linearRand<L, uint32, Q>
	{
		GLM_FUNC_QUALIFIER static vec<L, uint32, Q> call(vec<L, uint32, Q> const& Min, vec<L, uint32, Q> const& Max)
		{
			return (compute_rand<L, uint32, Q>::call() % (Max + static_cast<uint32>(1) - Min)) + Min;
		}
	};

	template<length_t L, qualifier Q>
	struct compute_linearRand<L, int64, Q>
	{
		GLM_FUNC_QUALIFIER static vec<L, int64, Q> call(vec<L, int64, Q> const& Min, vec<L, int64, Q> const& Max)
		{
			return (vec<L, int64, Q>(compute_rand<L, uint64, Q>::call() % vec<L, uint64, Q>(Max + static_cast<int64>(1) - Min))) + Min;
		}
	};

	template<length_t L, qualifier Q>
	struct compute_linearRand<L, uint64, Q>
	{
		GLM_FUNC_QUALIFIER static vec<L, uint64, Q> call(vec<L, uint64, Q> const& Min, vec<L, uint64, Q> const& Max)
		{
			return (compute_rand<L, uint64, Q>::call() % (Max + static_cast<uint64>(1) - Min)) + Min;
		}
	};

	template<length_t L, qualifier Q>
	struct compute_linearRand<L, float, Q>
	{
		GLM_FUNC_QUALIFIER static vec<L, float, Q> call(vec<L, float, Q> const& Min, vec<L, float, Q> const& Max)
		{
			return vec<L, float, Q>(compute_rand<L, uint32, Q>::call()) / static_cast<float>(std::numeric_limits<uint32>::max()) * (Max - Min) + Min;
		}
	};

	template<length_t L, qualifier Q>
	struct compute_linearRand<L, double, Q>
	{
		GLM_FUNC_QUALIFIER static vec<L, double, Q> call(vec<L, double, Q> const& Min, vec<L, double, Q> const& Max)
		{
			return vec<L, double, Q>(compute_rand<L, uint64, Q>::call()) / static_cast<double>(std::numeric_limits<uint64>::max()) * (Max - Min) + Min;
		}
	};

	template<length_t L, qualifier Q>
	struct compute_linearRand<L, long double, Q>
	{
		GLM_FUNC_QUALIFIER static vec<L, long double, Q> call(vec<L, long double, Q> const& Min, vec<L, long double, Q> const& Max)
		{
			return vec<L, long double, Q>(compute_rand<L, uint64, Q>::call()) / static_cast<long double>(std::numeric_limits<uint64>::max()) * (Max - Min) + Min;
		}
	};
}//namespace detail

	template<typename genType>
	GLM_FUNC_QUALIFIER genType linearRand(genType Min, genType Max)
	{
		return detail::compute_linearRand<1, genType, highp>::call(
			vec<1, genType, highp>(Min),
			vec<1, genType, highp>(Max)).x;
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> linearRand(vec<L, _Ty, Q> const& Min, vec<L, _Ty, Q> const& Max)
	{
		return detail::compute_linearRand<L, _Ty, Q>::call(Min, Max);
	}

	template<typename genType>
	GLM_FUNC_QUALIFIER genType gaussRand(genType Mean, genType Deviation)
	{
		genType w, x1, x2;

		do
		{
			x1 = linearRand(genType(-1), genType(1));
			x2 = linearRand(genType(-1), genType(1));

			w = x1 * x1 + x2 * x2;
		} while(w > genType(1));

		return static_cast<genType>(x2 * Deviation * Deviation * sqrt((genType(-2) * log(w)) / w) + Mean);
	}

	template<length_t L, typename _Ty, qualifier Q>
	GLM_FUNC_QUALIFIER vec<L, _Ty, Q> gaussRand(vec<L, _Ty, Q> const& Mean, vec<L, _Ty, Q> const& Deviation)
	{
		return detail::functor2<vec, L, _Ty, Q>::call(gaussRand, Mean, Deviation);
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER vec<2, _Ty, defaultp> diskRand(_Ty Radius)
	{
		assert(Radius > static_cast<_Ty>(0));

		vec<2, _Ty, defaultp> Result(_Ty(0));
		_Ty LenRadius(_Ty(0));

		do
		{
			Result = linearRand(
				vec<2, _Ty, defaultp>(-Radius),
				vec<2, _Ty, defaultp>(Radius));
			LenRadius = length(Result);
		}
		while(LenRadius > Radius);

		return Result;
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER vec<3, _Ty, defaultp> ballRand(_Ty Radius)
	{
		assert(Radius > static_cast<_Ty>(0));

		vec<3, _Ty, defaultp> Result(_Ty(0));
		_Ty LenRadius(_Ty(0));

		do
		{
			Result = linearRand(
				vec<3, _Ty, defaultp>(-Radius),
				vec<3, _Ty, defaultp>(Radius));
			LenRadius = length(Result);
		}
		while(LenRadius > Radius);

		return Result;
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER vec<2, _Ty, defaultp> circularRand(_Ty Radius)
	{
		assert(Radius > static_cast<_Ty>(0));

		_Ty a = linearRand(_Ty(0), static_cast<_Ty>(6.283185307179586476925286766559));
		return vec<2, _Ty, defaultp>(glm::cos(a), glm::sin(a)) * Radius;
	}

	template<typename _Ty>
	GLM_FUNC_QUALIFIER vec<3, _Ty, defaultp> sphericalRand(_Ty Radius)
	{
		assert(Radius > static_cast<_Ty>(0));

		_Ty theta = linearRand(_Ty(0), _Ty(6.283185307179586476925286766559f));
		_Ty phi = std::acos(linearRand(_Ty(-1.0f), _Ty(1.0f)));

		_Ty x = std::sin(phi) * std::cos(theta);
		_Ty y = std::sin(phi) * std::sin(theta);
		_Ty z = std::cos(phi);

		return vec<3, _Ty, defaultp>(x, y, z) * Radius;
	}
}//namespace glm
