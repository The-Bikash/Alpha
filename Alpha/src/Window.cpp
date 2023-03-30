module;
#include "../include/Engine/Api/GraphicsContext.hpp"

module Window;

import io;
import core;
import string;
import Event;
import KeyEvent;
import MouseEvent;
import ApplicationEvent;

namespace alpha {

class Window::_WindowImpl {
public:
	inline void SetEventCallBack(EventCallBack& _CallBack)noexcept {
		_Data._CallBack = &_CallBack;
	}
	inline _WindowImpl(unsigned int _Width, unsigned int _Height, const string& _Title, EventCallBack& _CallBack)noexcept {
		if constexpr (_debug) {
			print("Creating window ", _Title, _Width, _Height);
		}

		if (!GLFWintialized) {
			auto success = glfwInit();
			//glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
			//glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
			//glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
			if constexpr (_debug) {
				if (success == 0) {
					_print("GLFW INITIALISATION FAILED");
					system("pause");
					exit(1);
				}
			}
			GLFWintialized = true;
		}

		_Data._Width = _Width;
		_Data._Height = _Height;
		_Data._CallBack = &_CallBack;

		_Window = glfwCreateWindow(_Width, _Height, _Title.data(), nullptr, nullptr);

		if constexpr (_debug) {
			if (_Window == nullptr) {
				_print("Failed to create GLFW window");
				system("pause");
				exit(1);
			}
		}
		_Context = GraphicsContext(_Window);
		_Context.Init();

		glfwSetWindowUserPointer(_Window, &_Data);

		SetVsync(true);

		glfwSetWindowSizeCallback(_Window,
			[](GLFWwindow* _Window, int _Width, int _Height) {
				_WindowImpl::WindowData& _Data = *static_cast<_WindowImpl::WindowData*>(glfwGetWindowUserPointer(_Window));
				_Data._Width = _Width;
				_Data._Height = _Height;
				WindowResizeEvent _Event(_Width, _Height);

				if (_Data._CallBack != nullptr) {
					_Data._CallBack->operator()(_Event);
				}
			}
		);

		glfwSetWindowCloseCallback(_Window,
			[](GLFWwindow* _Window) {
				_WindowImpl::WindowData& _Data = *static_cast<_WindowImpl::WindowData*>(glfwGetWindowUserPointer(_Window));

				WindowCloseEvent _Event;

				if (_Data._CallBack != nullptr) {
					_Data._CallBack->operator()(_Event);
				}
			}
		);

		glfwSetKeyCallback(_Window,
			[](GLFWwindow* _Window, int key, int scancode, int action, int mods) {
				_WindowImpl::WindowData& _Data = *static_cast<_WindowImpl::WindowData*>(glfwGetWindowUserPointer(_Window));

				switch (action) {
					case GLFW_PRESS: {
						KeyPressedEvent _Event(key, false);
						if (_Data._CallBack != nullptr) _Data._CallBack->operator()(_Event);
						break;
					}
					case GLFW_RELEASE: {
						KeyReleasedEvent _Event(key);
						if (_Data._CallBack != nullptr) {
							_Data._CallBack->operator()(_Event);
						}
						break;
					}
					case GLFW_REPEAT: {
						KeyPressedEvent _Event(key, true);
						if (_Data._CallBack != nullptr) {
							_Data._CallBack->operator()(_Event);
						}
						break;
					}
				}
			}
		);

		glfwSetCharCallback(_Window,
			[](GLFWwindow* _Window, unsigned int keycode) {
				_WindowImpl::WindowData& _Data = *static_cast<_WindowImpl::WindowData*>(glfwGetWindowUserPointer(_Window));

				KeyTypedEvent _Event(keycode);
				if (_Data._CallBack != nullptr) {
					_Data._CallBack->operator()(_Event);
				}
			}
		);

		glfwSetMouseButtonCallback(_Window,
			[](GLFWwindow* _Window, int button, int action, int mods) {
				_WindowImpl::WindowData& _Data = *static_cast<_WindowImpl::WindowData*>(glfwGetWindowUserPointer(_Window));

				switch (action) {
					case GLFW_PRESS: {
						MouseButtonPressedEvent _Event(button);
						if (_Data._CallBack != nullptr) {
							_Data._CallBack->operator()(_Event);
						}
						break;
					}
					case GLFW_RELEASE: {
						MouseButtonReleasedEvent _Event(button);
						if (_Data._CallBack != nullptr) {
							_Data._CallBack->operator()(_Event);
						}
						break;
					}
				}
			}
		);

		
		glfwSetScrollCallback(_Window,
			[](GLFWwindow* _Window, double xOffset, double yOffset) {
				_WindowImpl::WindowData& _Data = *static_cast<_WindowImpl::WindowData*>(glfwGetWindowUserPointer(_Window));

				MouseScrolledEvent _Event((float)xOffset, (float)yOffset);
				if (_Data._CallBack != nullptr) {
					_Data._CallBack->operator()(_Event);
				}
			}
		);

		glfwSetCursorPosCallback(_Window,
			[](GLFWwindow* _Window, double xPos, double yPos) {
				_WindowImpl::WindowData& _Data = *static_cast<_WindowImpl::WindowData*>(glfwGetWindowUserPointer(_Window));

				MouseMovedEvent _Event((float)xPos, (float)yPos);
				if (_Data._CallBack != nullptr) {
					_Data._CallBack->operator()(_Event);
				}
			}
		);
	}

	inline ~_WindowImpl()noexcept {
		if (_Window != nullptr) {
			glfwDestroyWindow(_Window);
			_Window = nullptr;
			_Data._CallBack = nullptr;
		}
	}

	inline void OnUpdate()noexcept {
		glfwPollEvents();
		_Context.SwapBuffer();
	}

	inline unsigned int Width() const noexcept {
		return _Data._Width;
	}

	inline unsigned int Height() const noexcept {
		return _Data._Height;
	}

	inline GLFWwindow* NativeWindow() noexcept {
		return _Window;
	}

	inline void close()noexcept {
		this->~_WindowImpl();
	}

	inline static void SetVsync(bool _Switch)noexcept {
		glfwSwapInterval(_Switch);
		_Vsync = _Switch;
	}

	inline static bool IsVsync()noexcept {
		return _Vsync;
	}

	inline static void initialized() {
		GLFWintialized = false;
		GLADintialized = false;
		_Vsync = false;
	}

private:
	struct WindowData {
		unsigned    _Width;
		unsigned    _Height;
		EventCallBack* _CallBack = nullptr;
	};

	WindowData  _Data;
	GLFWwindow* _Window = nullptr;
	GraphicsContext _Context;
	static bool GLFWintialized;
	static bool GLADintialized;
	static bool _Vsync;
};

bool Window::_WindowImpl::GLADintialized = false;
bool Window::_WindowImpl::GLFWintialized = false;
bool Window::_WindowImpl::_Vsync = false;

void Window::SetEventCallBack(EventCallBack& _CallBack)noexcept {
	_Impl->SetEventCallBack(_CallBack);
}

Window::Window(unsigned int width, unsigned int height, const string& title, EventCallBack& _CallBack)noexcept {
	_Impl = new _WindowImpl(width, height, title, _CallBack);
}

Window::~Window()noexcept {
	if (_Impl != nullptr)
		delete _Impl;
}

void Window::OnUpdate()noexcept {
	_Impl->OnUpdate();
}

unsigned int Window::Width() const noexcept {
	return _Impl->Width();
}

unsigned int Window::Height() const noexcept {
	return _Impl->Height();
}

void* Window::NativeWindow() noexcept{
	return _Impl->NativeWindow();
}

void Window::SetVsync(bool _Switch)noexcept {
	_WindowImpl::SetVsync(_Switch);
}

bool Window::IsVsync()noexcept {
	return _WindowImpl::IsVsync();
}

void Window::close()noexcept {
	_Impl->close();
}

void Window::SetColour(float red, float green, float blue, float alpha) noexcept {
	glClearColor(red, green, blue, alpha);
	glClear(GL_COLOR_BUFFER_BIT);
}

}