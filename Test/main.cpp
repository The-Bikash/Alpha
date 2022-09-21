
module;

module Application;

import EntryPoint;
import Application;



class sandbox : public alpha::Application {

};

namespace alpha {
	Application* CreateApplication() {
		return new sandbox;

	}
}


