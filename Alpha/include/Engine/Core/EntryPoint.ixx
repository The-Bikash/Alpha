export module EntryPoint;

import Application;

extern alpha::Application* alpha::CreateApplication();

export int main(int argc, char** argv) {
	auto app = alpha::CreateApplication();
	app->run();
	delete app;
	return 0;
}



