#pragma once
#ifdef BC_PLATFORM_WINDOWS

extern BC::Application* BC::CreateApplication();

int main(int argc, char* argv[])
{
	printf("Welcome to BlueCheese game engine!!\n");

	auto app = BC::CreateApplication();
	app->Run();
	delete app;

	return 0;
}
#else
	#error BlueCheese only supports windows
#endif