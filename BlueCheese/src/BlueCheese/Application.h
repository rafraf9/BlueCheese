#pragma once

#include "Core.h"

namespace BC
{

	class BC_API Application
	{

	public:
		Application();
		virtual ~Application();

		//simple functions that starts the application
		void Run();
	};
	
	//Tp be defined by the client
	Application* CreateApplication();
}
