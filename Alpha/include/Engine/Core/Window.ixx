module;

export module Window;
import string;
import Event;

export namespace alpha {

	struct EventCallBack { virtual void operator()(Event& _event) = 0; };

	class Window {
	public:

		Window(unsigned int _Width, unsigned int _Height, const string& _Title, EventCallBack& _CallBack)noexcept;

		~Window()noexcept;

		void OnUpdate()noexcept;

		unsigned int Width()const noexcept;
		unsigned int Height()const noexcept;
		void* NativeWindow()noexcept;

		// Window attributes

		void SetEventCallBack(EventCallBack& _CallBack)noexcept;
		static bool IsVsync()noexcept;
		static void SetVsync(bool)noexcept;

		void close()noexcept;

		static void SetColour(float red, float green, float blue, float alpha)noexcept;

	private:

		class _WindowImpl; _WindowImpl* _Impl = nullptr;
	};

};
