export module Layer;

import Event;

namespace alpha {

	struct Layer {
		virtual inline ~Layer() = default;
		virtual inline void attach() = 0;
		virtual inline void detach() = 0;
		virtual inline void update() = 0;
		virtual inline void levent(Event& event) = 0;
	};

}
