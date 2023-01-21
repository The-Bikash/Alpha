module;
module Application;

import io;
import core;
import glad;
import glfw3;
import Window;
import LayerStack;

namespace alpha {

	struct Application::_ApplicationImpl {
		struct _ApplicationEventCallBack : public EventCallBack {
			Application* _App = nullptr;
			void operator()(Event& _event)override {
				_App->OnEvent(_event);
			}
		}			_CallBack;
		Window*		_Window;
		LayerStack  _LayerStack;
		bool		_Running;
	};

	Application::Application() {
		_Impl = new _ApplicationImpl;
		_Impl->_Window = new Window(640, 480, "Bikash");
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

	void Application::PushLayer(Layer* _Layer)noexcept {
		_Impl->_LayerStack.PushLayer(_Layer);
	}
	void Application::PushOverlay(Layer* _Layer)noexcept {
		_Impl->_LayerStack.PushOverlay(_Layer);
	}

	void Application::OnEvent(Event& _Event)noexcept {
		if (_Event.EventType() == EventTy::WindowClose) {
			_Impl->_Running = false;
		}
		for (auto it = _Impl->_LayerStack.end(); it != _Impl->_LayerStack.begin();) {
			(*--it)->OnEvent(_Event);
			if (_Event.Handled)
				break;
		}
		//clearconsole();
		_print(_Event);
	}

	void Application::run() {
		while (_Impl->_Running) {
			glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
			glClear(GL_COLOR_BUFFER_BIT);

			int i = 0;
			for (Layer* _Layer : _Impl->_LayerStack)
				_Layer->OnUpdate();
				
			_Impl->_Window->Update();
		}
	}

	void Application::close() {
		this->~Application();
	}

	
}




