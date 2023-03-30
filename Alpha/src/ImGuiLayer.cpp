module;

#include "../../vendor/GLAD/include/glad/glad.h"
#include "../../vendor/GLFW/include/GLFW/glfw3.h"
#include "../../vendor/ImGui/imgui.h"
#include "../../vendor/ImGui/backends/imgui_impl_glfw.h"
#include "../../vendor/ImGui/backends/imgui_impl_opengl3.h"


module ImGuiLayer;

import Application;
import Event;
import ApplicationEvent;
import KeyEvent;
import MouseEvent;

//Temorary
namespace alpha {

	ImGuiLayer::ImGuiLayer() : Layer("ImGuiLayer"){}

	void ImGuiLayer::OnAttach() {
		IMGUI_CHECKVERSION();
		ImGui::CreateContext();
		ImGuiIO& io = ImGui::GetIO();

		io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
		io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;
		io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;

		//io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;
		//io.BackendFlags |= ImGuiBackendFlags_HasMouseCursors;
		//io.BackendFlags |= ImGuiBackendFlags_HasSetMousePos;
		
		//ImGui::SetNextWindowPos({ 10, 10 }, ImGuiCond_FirstUseEver);

		ImGui::StyleColorsDark(); 
		ImGuiStyle& style = ImGui::GetStyle();
		if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable) {
			style.WindowRounding = 0.0f;
			style.Colors[ImGuiCol_WindowBg].w = 1.0f;
		}

		auto& _App = Application::GetApp();
		auto* window = static_cast<GLFWwindow*>(_App.window().NativeWindow());

		 //Setup Platform/Renderer bindings
		ImGui_ImplGlfw_InitForOpenGL(window, true);
		ImGui_ImplOpenGL3_Init("#version 460");
	}
	 
	void ImGuiLayer::OnDetach() {
		ImGui_ImplOpenGL3_Shutdown();
		ImGui_ImplGlfw_Shutdown();
		ImGui::DestroyContext();
	}

	void ImGuiLayer::OnRender() {
		static bool show = true;
		ImGui::ShowDemoWindow(&show);
	}

	void ImGuiLayer::Begin() {
		ImGui_ImplOpenGL3_NewFrame();
		ImGui_ImplGlfw_NewFrame();
		ImGui::NewFrame();
	}

	void ImGuiLayer::End(){
		ImGuiIO& io = ImGui::GetIO();
		Application& _App = Application::GetApp();
		io.DisplaySize = ImVec2((float)_App.Width(), (float)_App.Height());

		ImGui::Render();
		ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

		if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable) {
			GLFWwindow* backup_current_consext = glfwGetCurrentContext();
			ImGui::UpdatePlatformWindows();
			ImGui::RenderPlatformWindowsDefault();
			glfwMakeContextCurrent(backup_current_consext);
		}

	}

	/*void ImGuiLayer::OnUpdate() {
		ImGui_ImplOpenGL3_NewFrame();
		ImGui::NewFrame();


		static bool show = true;
		ImGui::ShowDemoWindow(&show);


		ImGui::Render();
		ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
	}*/

	//void ImGuiLayer::OnEvent(Event& _Event) {
	//	ImGuiIO& io = ImGui::GetIO();
	//	switch (_Event.EventType()) {
	//		case EventTy::MouseButtonPressed: {
	//			auto& _MEvent = static_cast<MouseButtonPressedEvent&>(_Event);
	//			io.MouseDown[_MEvent.Button] = true;
	//			_Event.Handled |= false;
	//			return;
	//		}
	//		case EventTy::MouseButtonReleased: {
	//			auto& _MEvent = static_cast<MouseButtonReleasedEvent&>(_Event);
	//			io.MouseDown[_MEvent.Button] = false;
	//			_Event.Handled |= false;
	//			return;
	//		}
	//		case EventTy::MouseMoved: {
	//			auto& _MEvent = static_cast<MouseMovedEvent&>(_Event);
	//			io.MousePos = ImVec2(_MEvent.MouseX, _MEvent.MouseY);
	//			//_Event.Handled |= false;
	//			return;
	//		}
	//		case EventTy::MouseScrolled: {
	//			auto& _MEvent = static_cast<MouseScrolledEvent&>(_Event);
	//			io.MouseWheel += _MEvent.XOffset;
	//			io.MouseWheelH += _MEvent.YOffset;
	//			_Event.Handled |= false;
	//			return;
	//		}
	//		case EventTy::KeyPressed: {
	//			auto& _MEvent = static_cast<KeyPressedEvent&>(_Event);
	//			io.KeysDown[_MEvent._KeyCode] = true;
	//			io.KeyCtrl = io.KeysDown[GLFW_KEY_LEFT_CONTROL] || io.KeysDown[GLFW_KEY_RIGHT_CONTROL];
	//			io.KeyShift = io.KeysDown[GLFW_KEY_LEFT_SHIFT] || io.KeysDown[GLFW_KEY_RIGHT_SHIFT];
	//			io.KeyAlt = io.KeysDown[GLFW_KEY_LEFT_ALT] || io.KeysDown[GLFW_KEY_RIGHT_ALT];
	//			io.KeySuper = io.KeysDown[GLFW_KEY_LEFT_SUPER] || io.KeysDown[GLFW_KEY_RIGHT_SUPER];
	//			_Event.Handled |= false;
	//			return;
	//		} 
	//		case EventTy::KeyReleased: {
	//			auto& _MEvent = static_cast<KeyReleasedEvent&>(_Event);
	//			io.KeysDown[_MEvent._KeyCode] = false;
	//			_Event.Handled |= false;
	//			return;
	//		}
	//		case EventTy::KeyTyped: {
	//			auto& _MEvent = static_cast<KeyTypedEvent&>(_Event);
	//			 
	//			if (_MEvent._KeyCode > 0 && _MEvent._KeyCode < 0x10000)
	//				io.AddInputCharacter((unsigned short)(_MEvent._KeyCode));
	//			_Event.Handled |= false;
	//			return; 
	//		}
	//		case EventTy::WindowResize: {
	//			auto& _MEvent = static_cast<WindowResizeEvent&>(_Event);
	//			io.DisplaySize = ImVec2(static_cast<float>(_MEvent._Width), static_cast<float>(_MEvent._Height));
	//			io.DisplayFramebufferScale = ImVec2(1.0f, 1.0f);
	//			glViewport(0, 0, _MEvent._Width, _MEvent._Height);
	//			_Event.Handled |= false;
	//			return;
	//		}
	//		default: {
	//			_Event.Handled |= true;
	//			return;
	//		}
	//	}
	//}
	 
}