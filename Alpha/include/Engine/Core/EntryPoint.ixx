export module EntryPoint;

import Application;
import core;
import code;

extern alpha::Application* alpha::CreateApplication();

export int main(int argc, char** argv) {
	FUN();
	
	/*if constexpr (_debug) {
		auto app = alpha::CreateApplication();
		app->Run();
		delete app;
	}*/
	return 0;
}



