import LinearContainer;
import core;
import io;
import Matrix;
import Rational;
import Window;
import EntryPoint;
import Application;
import Layer;
import Event;

//auto start = std::chrono::high_resolution_clock::now();
//auto end = std::chrono::high_resolution_clock::now();
//
//
//
//#define time_start start = std::chrono::high_resolution_clock::now()
//#define time_end end = std::chrono::high_resolution_clock::now();\
//std::cout << "\n\nTime : " << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << "\n\n\n"

class ExampleLayer : public alpha::Layer {
public:
	ExampleLayer() : Layer("Layer") {}
	void OnUpdate()override {
		alpha::print("\nExampleLayer::Update");
	}
	void OnEvent(alpha::Event& _Event)override {
		alpha::print(_Event);
	}
	void OnAttach()override{}
	void OnDetach()override{}
};

class Sandbox : public alpha::Application {
public:
	Sandbox() {
		PushLayer(new ExampleLayer());
	}
	~Sandbox(){}
};



alpha::Application* alpha::CreateApplication() {
	return new Sandbox();
}

