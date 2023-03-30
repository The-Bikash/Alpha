import core;
import io;
import LinearContainer;
//import Matrix;
import Rational;
import Window;
import EntryPoint;
import Application;
import Layer;
import Event;
import algorithm;
import ImGuiLayer;
import time;
import code;


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
    void OnDetach()override {}
};

class Sandbox : public alpha::Application {
public:
	Sandbox() {
		PushLayer(new ExampleLayer());
		PushOverlay(new alpha::ImGuiLayer());
	}
	~Sandbox(){}
};



alpha::Application* alpha::CreateApplication() {
	return new Sandbox();
}
