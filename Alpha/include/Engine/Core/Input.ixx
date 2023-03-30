export module Input;

import KeyCodes;
import MouseCodes;

export namespace alpha {
	class Input {
	public:
		static bool IsKeyPressed(KeyCode keycode)noexcept;
		static bool IsMouseButtonPressed(MouseCode button)noexcept;
		static float GetMouseX()noexcept;
		static float GetMouseY()noexcept;
	};
	
}