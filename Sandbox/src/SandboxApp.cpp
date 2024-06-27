#include<Vacvvm.h>

class Sandbox : public Vacvvm::App
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{
		
	}
};

Vacvvm::App* Vacvvm::CreateApp()
{
	return new Sandbox();
}
