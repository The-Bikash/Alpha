export module Layer;

import Event;
import string;

export namespace alpha {

	class Layer {
	public:
		inline Layer(const string& _Name) : _Name(_Name){}
		virtual inline ~Layer() = default;

		virtual inline void OnAttach() = 0;
		virtual inline void OnDetach() = 0;
		virtual inline void OnUpdate() = 0;
		virtual inline void OnEvent(Event& event) = 0;
	protected:
		string _Name;
	};

}
