export module KeyEvent;

import Event;
import KeyCodes;

export namespace alpha {

struct KeyEvent : public Event {
	KeyCode _KeyCode;

	KeyEvent(const KeyCode keycode) : _KeyCode(keycode) {

	}
	int EventCategory()const noexcept override {
		return EventKeyboard | EventInput;
	}
};

struct KeyPressedEvent : public KeyEvent {
	bool _IsRepeat;

	KeyPressedEvent(const KeyCode keycode, bool isRepeat = false)
		: KeyEvent(keycode), _IsRepeat(isRepeat) {
	}
	EventTy EventType()const noexcept override {
		return KeyPressed;
	}
	string Info()const noexcept override {
		if(_IsRepeat)
			return string("\nWindowKeyRepeatEvent : Key is   ") += string(keyname(_KeyCode));
		return string("\nWindowKeyPressedEvent : key is      ") += string(keyname(_KeyCode));
	}
};

struct KeyReleasedEvent : public KeyEvent {
	KeyReleasedEvent(const KeyCode keycode)
		: KeyEvent(keycode) {}

	EventTy EventType()const noexcept override {
		return KeyReleased;
	}
	string Info()const noexcept override {
		return "\nWindowKeyReleasedEvent";
	}
};

struct KeyTypedEvent : public KeyEvent {
	KeyTypedEvent(const KeyCode keycode)
		: KeyEvent(keycode) {}

	EventTy EventType()const noexcept override {
		return KeyTyped;
	}
	string Info()const noexcept override {
		return "\nWindowKeyTypedEvent";
	}
};

}