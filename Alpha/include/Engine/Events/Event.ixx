export module Event;

import string;

export namespace alpha {

	enum EventTy {
		None = 0,
		WindowClose, WindowResize, WindowFocus, WindowLostFocus, WindowMoved,
		AppTick, AppUpdate, AppRender,
		KeyPressed, KeyReleased, KeyTyped,
		MouseButtonPressed, MouseButtonReleased, MouseMoved, MouseScrolled
	};

	enum EventCat {
		EventApplication = 0,
		EventInput = 1 << 1,
		EventKeyboard = 1 << 2,
		EventMouse = 1 << 3,
		EventMouseButton = 1 << 4
	};


	struct Event {

		bool Handled = false;

		virtual ~Event()noexcept = default;

		virtual EventTy EventType()const noexcept = 0;

		virtual int EventCategory()const noexcept = 0;

		virtual string Info()const noexcept = 0;
	};

	void _print(const Event& _Event) {
		_print(_Event.Info());
	}

}



