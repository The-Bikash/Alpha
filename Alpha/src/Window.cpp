module;
module Window;

import io;
import core;
import glad;
import glfw3;
import Event;
import KeyEvent;
import MouseEvent;
import ApplicationEvent;

namespace alpha {

static inline bool GLFWintialized = false;
static inline bool GLADintialized = false;
static inline bool _Vsync	      = false;

struct Window::_WindowImpl {
	struct WindowData {
		unsigned int   _Width;
		unsigned int   _Height;
		EventCallBack* _CallBack;
	};

	WindowData  _Data;
	GLFWwindow* _Window;
};

void Window::SetEventCallBack(EventCallBack& _CallBack)noexcept {
	_Impl->_Data._CallBack = &_CallBack;
}

Window::Window(unsigned int width, unsigned int height, const char* title)noexcept {
	if constexpr (_debug) {
		print("Creating window ", title, width, height);
	}

	_Impl = new _WindowImpl;
	
	if (!GLFWintialized) {
		auto success = glfwInit();
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, GLFW_VERSION_MAJOR);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, GLFW_VERSION_MINOR);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		if constexpr (_debug) {
			if (success == 0) {
				_print("GLFW INITIALISATION FAILED");
				system("pause");
				exit(1);
			}
		}
		GLFWintialized = true;
	}

	_Impl->_Data._Width =    width;
	_Impl->_Data._Height =   height;
	_Impl->_Data._CallBack = nullptr;

	_Impl->_Window = glfwCreateWindow(width, height, title, nullptr, nullptr);

	if constexpr (_debug) {
		if (_Impl->_Window == nullptr) {
			_print("Failed to create GLFW window");
			system("pause");
			exit(1);
		}
	}

	glfwMakeContextCurrent(_Impl->_Window);

	if (!GLADintialized) {
		auto success = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
		if constexpr (_debug) {
			if (success == 0) {
				_print("GLAD INITIALISATION FAILED");
				system("pause");
				exit(1);
			}
		}
		GLADintialized = true;
	}

	glfwSetWindowUserPointer(_Impl->_Window, &(_Impl->_Data));

	SetVsync(true);

	glfwSetWindowSizeCallback(_Impl->_Window,
		[](GLFWwindow* _Window, int _Width, int _Height) {
			_WindowImpl::WindowData& _Data = *static_cast<_WindowImpl::WindowData*>(glfwGetWindowUserPointer(_Window));
			_Data._Width  = _Width;
			_Data._Height = _Height;
			WindowResizeEvent _Event(_Width, _Height);

			if (_Data._CallBack != nullptr) {
				_Data._CallBack->operator()(_Event);
			}
		}
	);

	glfwSetWindowCloseCallback(_Impl->_Window,
		[](GLFWwindow* _Window) {
			_WindowImpl::WindowData& _Data = *static_cast<_WindowImpl::WindowData*>(glfwGetWindowUserPointer(_Window));

			WindowCloseEvent _Event;

			if (_Data._CallBack != nullptr) {
				_Data._CallBack->operator()(_Event);
			}
			
		}
	);

	glfwSetKeyCallback(_Impl->_Window,
		[](GLFWwindow* _Window, int key, int scancode, int action, int mods) {
			_WindowImpl::WindowData& _Data = *static_cast<_WindowImpl::WindowData*>(glfwGetWindowUserPointer(_Window));

			switch (action) {
				case GLFW_PRESS: {
					KeyPressedEvent _Event(key, false);
					if (_Data._CallBack != nullptr) {
						_Data._CallBack->operator()(_Event);
					}
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

	glfwSetCharCallback(_Impl->_Window,
		[](GLFWwindow* _Window, unsigned int keycode) {
			_WindowImpl::WindowData& _Data = *static_cast<_WindowImpl::WindowData*>(glfwGetWindowUserPointer(_Window));

			KeyTypedEvent _Event(keycode);
			if (_Data._CallBack != nullptr) {
				_Data._CallBack->operator()(_Event);
			}

		}
	);

	glfwSetMouseButtonCallback(_Impl->_Window,
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

	glfwSetScrollCallback(_Impl->_Window,
		[](GLFWwindow* _Window, double xOffset, double yOffset) {
			_WindowImpl::WindowData& _Data = *static_cast<_WindowImpl::WindowData*>(glfwGetWindowUserPointer(_Window));

			MouseScrolledEvent _Event((float)xOffset, (float)yOffset);
			if (_Data._CallBack != nullptr) {
				_Data._CallBack->operator()(_Event);
			}
		}
	);

	glfwSetCursorPosCallback(_Impl->_Window,
		[](GLFWwindow* _Window, double xPos, double yPos) {
			_WindowImpl::WindowData& _Data = *static_cast<_WindowImpl::WindowData*>(glfwGetWindowUserPointer(_Window));

			MouseMovedEvent _Event((float)xPos, (float)yPos);
			if (_Data._CallBack != nullptr) {
				_Data._CallBack->operator()(_Event);
			}
		}
	);

} 

Window::~Window()noexcept {
	if (_Impl != nullptr) {
		glfwDestroyWindow(_Impl->_Window);
		_Impl->_Window = nullptr;
		_Impl->_Data._CallBack = nullptr;
		delete _Impl;
		_Impl = nullptr;
	}
}



void Window::Update()noexcept {
	glfwPollEvents();
	glfwSwapBuffers(_Impl->_Window);
}

void Window::close()noexcept {
	this->~Window();
}


inline void Window::SetVsync(bool yes)noexcept {
	glfwSwapInterval(yes);
	_Vsync = yes;
}

inline bool Window::IsVsync()noexcept {
	return _Vsync;
}

}