#pragma once

#ifdef EV_PLATFORM_WIN

extern Vacvvm::App* Vacvvm::CreateApp();

int main(int argc, char** argv)
{
	auto app = Vacvvm::CreateApp();
	app->Run();
	delete app;
}
#endif

