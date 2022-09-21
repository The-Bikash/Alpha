export module MouseEvent;

import Event;
import MouseCodes;

export namespace alpha {

struct MouseMovedEvent : public Event {

	float MouseX, MouseY;

	MouseMovedEvent(const float x, const float y)
		: MouseX(x), MouseY(y) {}

	EventTy EventType()const noexcept override {
		return MouseMoved;
	}
	int EventCategory()const noexcept override {
		return EventMouse | EventInput;
	}
	string Info()const noexcept override {
		string _Tmp;
		sprint(_Tmp, "\nMouseMovedEvent : ", MouseX, ", ", MouseY);
		return _Tmp;
	}
};

struct MouseScrolledEvent : public Event {

	float XOffset, YOffset;

	MouseScrolledEvent(const float xOffset, const float yOffset)
		: XOffset(xOffset), YOffset(yOffset) {}

	EventTy EventType()const noexcept override {
		return MouseMoved;
	}
	int EventCategory()const noexcept override {
		return EventMouse | EventInput;
	}
	string Info()const noexcept override {
		string _Tmp;
		sprint(_Tmp, "\nMouseScrolledEvent : ", XOffset, ", ", YOffset);
		return _Tmp;
	}
};

struct MouseButtonEvent : public Event {
	MouseCode Button;
	MouseButtonEvent(const MouseCode button)
		: Button(button) {
	}
	int EventCategory()const noexcept override {
		return EventMouse | EventInput | EventMouseButton;
	}
};

struct MouseButtonPressedEvent : public MouseButtonEvent {
	MouseButtonPressedEvent(const MouseCode button)
		: MouseButtonEvent(button) {
	}
	EventTy EventType()const noexcept override {
		return MouseButtonPressed;
	}
	string Info()const noexcept override {
		return "\nMouseButtonPressed";
	}
};

struct MouseButtonReleasedEvent : public MouseButtonEvent {
	MouseButtonReleasedEvent(const MouseCode button)
		: MouseButtonEvent(button) {
	}

	EventTy EventType()const noexcept override {
		return MouseButtonReleased;
	}
	string Info()const noexcept override {
		return "\nMouseButtonReleased";
	}
};

}