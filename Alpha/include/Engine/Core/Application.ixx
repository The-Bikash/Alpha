export module Application;

import Event;
import Layer;

export namespace alpha {

	class Application {
	public:
		Application();
		virtual ~Application();
		void OnEvent(Event& event)noexcept;
		void PushLayer(Layer* layer)noexcept;
		void PushOverlay(Layer* layer)noexcept;
		void close();
		void run();

	private:
		struct _ApplicationImpl;
		_ApplicationImpl* _Impl;
	};

	// To be defined in client;

	Application* CreateApplication();

}