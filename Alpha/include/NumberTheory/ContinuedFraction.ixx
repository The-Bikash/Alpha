module;
export module ContinuedFraction;
import LinearContainer;

export namespace alpha {
	template<class _Int>
	class ContinuedFraction {
		constexpr ContinuedFraction(const Array<_Int>& _That)noexcept {
			_Cfraction = _That;
		}

	private:
		LinearContainer<_Int> _Cfraction;
	};
}