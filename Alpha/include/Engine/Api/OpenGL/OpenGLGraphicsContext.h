#pragma once
#include "../../../vendor/GLAD/include/glad/glad.h"
#include "../../../vendor/GLFW/include/GLFW/glfw3.h"

namespace alpha {
	inline void _print(const char* _Str)noexcept;
	class OpenGLGraphicsContext {
	public:
		static bool GLADintialized;
		OpenGLGraphicsContext() {}
		OpenGLGraphicsContext(GLFWwindow* _Window) : _Window(_Window) {}
		~OpenGLGraphicsContext() {
			_Window = nullptr;
		}
		void Init() {
			glfwMakeContextCurrent(_Window);

			if (!GLADintialized) {
				auto success = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

				if (success == 0) {
					_print("GLAD INITIALISATION FAILED");
					__debugbreak();
				}
				GLADintialized = true;
			}
		}
		void SwapBuffer(){
			glfwSwapBuffers(_Window);
		}
	private:
		GLFWwindow* _Window = nullptr;
	};

	bool OpenGLGraphicsContext::GLADintialized = false;
}
