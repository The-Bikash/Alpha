module;
module Application;

import io;
import core;
import glad;
import glfw3;
import Window;

namespace alpha {

	struct Application::_ApplicationImpl {
		struct _ApplicationEventCallBack : public EventCallBack {
			Application* _App = nullptr;
			void operator()(Event& _event)override {
				_App->OnEvent(_event);
			}
		}		_CallBack;
		Window* _Window;
		bool	_Running;
	};

	Application::Application() {
		_Impl = new _ApplicationImpl;
		_Impl->_Window = new Window(720, 480, "Alpha");
		_Impl->_CallBack._App = this;
		_Impl->_Window->SetEventCallBack(_Impl->_CallBack);
		_Impl->_Running = true;
	}

	Application::~Application() {
		if (_Impl != nullptr) {
			_Impl->_Running = false;
			delete _Impl->_Window;
			_Impl->_Window = nullptr;

			delete _Impl;
			_Impl = nullptr;
		}
	}

	void Application::OnEvent(Event& event)noexcept {
		if (event.EventType() == EventTy::WindowClose) {
			_Impl->_Running = false;
		}
		clearconsole();
		_print(event);
	}

	void Application::run() {
		while (_Impl->_Running) {
			glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
			glClear(GL_COLOR_BUFFER_BIT);
			_Impl->_Window->Update();
		}
	}

	void Application::close() {
		this->~Application();
	}

	
}




