export module Layer;

import Event;
import string;

export namespace alpha {

	class Layer {
	public:
		inline Layer(const string& _Name = "Layer") : _Name(_Name) {}
		virtual inline ~Layer() = default;

		virtual inline void OnAttach() {}
		virtual inline void OnDetach() {}
		virtual inline void OnUpdate() {}
		virtual inline void OnRender() {}
		virtual inline void OnEvent(Event& event) {}

		const string& GetName()const { return _Name; }
	protected:
		string _Name;
	};

}
