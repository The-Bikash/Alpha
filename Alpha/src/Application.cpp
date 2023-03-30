module;
module Application;
import core;
import io;
import Window;
import ImGuiLayer;
import LayerStack;

namespace alpha {

	class Application::ApplicationImpl {
	public:
		inline ApplicationImpl()noexcept {
			_CallBack._App = this;
			_Window = new Window(1080, 720, "Bikash", _CallBack);
			_ImGuiLayer = new ImGuiLayer();
		}

		inline ~ApplicationImpl()noexcept {
			if (_Window != nullptr || _Running) {
				_Running = false;
				delete _Window;
				_Window = nullptr;
			}
		}

		inline void PushLayer(Layer* _Layer)noexcept {
			_LayerStack.PushLayer(_Layer);
			_Layer->OnAttach();
		}

		inline void PushOverlay(Layer* _Layer)noexcept {
			_LayerStack.PushOverlay(_Layer);
			_Layer->OnAttach();
		}

		inline void OnEvent(Event& _Event)noexcept {
			if (_Event.EventType() == EventTy::WindowClose) {
				_Running = false;
			}
			for (auto it = _LayerStack.end(); it != _LayerStack.begin();) {
				if (_Event.Handled)
					break;
				(*--it)->OnEvent(_Event);
			}
			//clearconsole();
			_print(_Event);
		}

		inline void Run()noexcept {
			while (_Running) {
				Window::SetColour(0.2f, 0.3f, 0.3f, 1.0f);

				for (Layer* layer : _LayerStack)
					layer->OnUpdate();

				_ImGuiLayer->Begin();
				for (Layer* _Layer : _LayerStack)
					_Layer->OnRender();
				_ImGuiLayer->End();

				_Window->OnUpdate();
			}
		}

		inline void Close() {
			this->~ApplicationImpl();
		}

		inline unsigned int Width()noexcept {
			return _Window->Width();
		}

		inline unsigned int Height()noexcept {
			return _Window->Height();
		}

		inline Window& window()noexcept {
			return *_Window;
		}

	private:
		struct MyEventCallBack : public EventCallBack {
			ApplicationImpl* _App = nullptr;
			void operator()(Event& _Event)override {
				_App->OnEvent(_Event);
			}
		};

		MyEventCallBack _CallBack;
		Window* _Window = nullptr;
		ImGuiLayer* _ImGuiLayer = nullptr;
		LayerStack _LayerStack;
		bool _Running = true;
	};


	//******************************************* APPLICATION**********************************************\\

	Application* Application::_Instance = nullptr;

	Application& Application::GetApp() {
		return *_Instance;
	}

	Application::Application() {
		if constexpr (_debug) {
			if (_Instance != nullptr) {
				alpha::print("\nApplication Already Exists");
				__debugbreak();
			}
		}
		_Instance = this;
		_Impl = new ApplicationImpl;
	}

	Application::~Application() {
		delete _Impl;
		_Impl = nullptr;
	}

	void Application::PushLayer(Layer* _Layer)noexcept {
		_Impl->PushLayer(_Layer);
	}

	void Application::PushOverlay(Layer* _Layer)noexcept {
		_Impl->PushOverlay(_Layer);
	}

	void Application::Close() noexcept {
		_Impl->Close();
	}

	void Application::Run() noexcept {
		_Impl->Run();
	}

	Window& Application::window() noexcept {
		return _Impl-> window();
	}

	unsigned int Application::Width() noexcept{
		return _Impl->Width();
	}

	unsigned int Application::Height() noexcept {
		return _Impl->Height();
	}

	void Application::OnEvent(Event& _Event)noexcept {
		_Impl->OnEvent(_Event);
	}
	
}




