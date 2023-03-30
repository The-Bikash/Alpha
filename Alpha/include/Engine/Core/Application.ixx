export module Application;

import Event;
import Layer;
import Window;

export namespace alpha {
	class Application {
	public:
		static Application& GetApp();
		Application();
		virtual ~Application();
		void OnEvent(Event& event)noexcept;
		void PushLayer(Layer* layer)noexcept;
		void PushOverlay(Layer* layer)noexcept;
		void Close()noexcept;
		void Run()noexcept;
		Window& window()noexcept;

		unsigned int Width()noexcept;
		unsigned int Height()noexcept;


	private:
		class ApplicationImpl;
		ApplicationImpl* _Impl = nullptr;
		static Application* _Instance;
	};

	// To be defined in client;

	Application* CreateApplication();

}