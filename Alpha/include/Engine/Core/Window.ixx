module;

export module Window;

import Event;

export namespace alpha {

	struct EventCallBack {
		virtual void operator()(Event& _event) = 0;
	};

	class Window {
	public:

		~Window()noexcept;

		Window(unsigned int width, unsigned int height, const char* title)noexcept;

		void SetEventCallBack(EventCallBack& _CallBack)noexcept;

		static bool IsVsync()noexcept;

		static void SetVsync(bool)noexcept;

		void Update()noexcept;

		void close()noexcept;

	private:

		struct _WindowImpl; _WindowImpl* _Impl;
	};

};
