module;
#include "../../vendor/GLFW/include/GLFW/glfw3.h"
module Input;
import Application;
import MouseCodes;
import KeyCodes;

namespace alpha {

	bool Input::IsKeyPressed(KeyCode keycode) noexcept {
		auto* window = static_cast<GLFWwindow*>(Application::GetApp().window().NativeWindow());
		auto state = glfwGetKey(window, keycode);
		return state == GLFW_PRESS;
	}
	bool Input::IsMouseButtonPressed(MouseCode button) noexcept {
		auto* window = static_cast<GLFWwindow*>(Application::GetApp().window().NativeWindow());
		auto state = glfwGetMouseButton(window, static_cast<int>(button));
		return state == GLFW_PRESS;
	}
	float Input::GetMouseX() noexcept {
		auto* window = static_cast<GLFWwindow*>(Application::GetApp().window().NativeWindow());
		double xpos, ypos;
		glfwGetCursorPos(window, &xpos, &ypos);
		return static_cast<float>(xpos);
	}
	float Input::GetMouseY() noexcept{
		auto* window = static_cast<GLFWwindow*>(Application::GetApp().window().NativeWindow());
		double xpos, ypos;
		glfwGetCursorPos(window, &xpos, &ypos);
		return static_cast<float>(ypos);
	}
}