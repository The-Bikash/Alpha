export module LayerStack;

import Layer;
import LinearContainer;
import algorithm;



export namespace alpha {
	class LayerStack {
	public:
		inline LayerStack()noexcept = default;
		inline ~LayerStack()noexcept {
			for (Layer* _Layer : Layers) {
				_Layer->OnDetach();
				delete _Layer;
			}
		}
		void PushLayer(Layer* _Layer)noexcept {
			Layers.emplace(LayerInsertIndex, _Layer);
			++LayerInsertIndex;
		}
		void PushOverlay(Layer* _Overlay)noexcept {
			Layers.emplace_back(_Overlay);
		}
		void PopLayer(Layer* _Layer)noexcept {
			auto _Iterator = alpha::find(Layers.begin(), Layers.begin() + LayerInsertIndex, _Layer);
			if (_Iterator != Layers.begin() + LayerInsertIndex) {
				_Layer->OnDetach();
				Layers.erase(_Iterator);
				--LayerInsertIndex;
			}
		}
		void PopOverlay(Layer* _Overlay) {
			auto _Iterator = alpha::find(Layers.begin() + LayerInsertIndex, Layers.end(), _Overlay);
			if (_Iterator != Layers.end()) {
				_Overlay->OnDetach();
				Layers.erase(_Iterator);
			}
		}

		inline alpha::Array<Layer*>::Iterator begin()noexcept {
			return Layers.begin();
		}
		inline alpha::Array<Layer*>::Iterator end()noexcept {
			return Layers.end();
		}
	private:
		alpha::Array<Layer*> Layers;
		unsigned int LayerInsertIndex = 0;
	};
}

