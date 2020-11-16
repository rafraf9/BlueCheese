#include <BlueCheese.h>

class Sandbox : public BC::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};


BC::Application* BC::CreateApplication()
{
	return new Sandbox();
}