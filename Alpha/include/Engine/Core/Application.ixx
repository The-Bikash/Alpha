export module Application;

import Event;

export namespace alpha {

	class Application {
	public:
		Application();
		void OnEvent(Event& event)noexcept;
		virtual ~Application();
		void close();
		void run();

	private:
		struct _ApplicationImpl;
		_ApplicationImpl* _Impl;
	};

	// To be defined in client;

	Application* CreateApplication();

}