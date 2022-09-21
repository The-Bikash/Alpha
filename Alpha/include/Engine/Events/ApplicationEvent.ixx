export module ApplicationEvent;

import Event;
import string;

export namespace alpha {

struct WindowResizeEvent : public Event {
	WindowResizeEvent(unsigned int width, unsigned int height)
		: _Width(width), _Height(height) {}

	EventTy EventType()const noexcept override {
		return WindowResize;
	}
	int EventCategory()const noexcept override {
		return EventApplication;
	}
	string Info()const noexcept override {
		string _Tmp;
		sprint(_Tmp, "\nWindowResizeEvent : ", _Width, ", ", _Height);
		return _Tmp;
	};

	unsigned int _Width, _Height;
};

struct WindowCloseEvent : public Event {

	EventTy EventType()const noexcept override {
		return WindowClose;
	}
	int EventCategory()const noexcept override {
		return EventApplication;
	}
	string Info()const noexcept override {
		return "\nWindowCloseEvent";
	}
};

struct AppTickEvent : public Event {

	EventTy EventType()const noexcept override {
		return AppTick;
	}
	int EventCategory()const noexcept override {
		return EventApplication;
	}
	string Info()const noexcept override {
		return "\nWindowAppTickEvent";
	}
};

struct AppUpdateEvent : public Event {

	EventTy EventType()const noexcept override {
		return AppUpdate;
	}
	int EventCategory()const noexcept override {
		return EventApplication;
	}

	string Info()const noexcept override {
		return "\nWindowAppUpdateEvent";
	}
};

struct AppRenderEvent : public Event {

	EventTy EventType()const noexcept override {
		return AppRender;
	}
	int EventCategory()const noexcept override {
		return EventApplication;
	}
	string Info()const noexcept override {
		return "\nWindowAppRenderEvent";
	}
};

}

