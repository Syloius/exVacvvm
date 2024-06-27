#pragma once
#include "Cctrl.h"

namespace Vacvvm
{
	class EV_API App
	{
	public:
		App();
		virtual ~App();
		void Run();
	};
	
	// To be defined in CLIENT
	App* CreateApp();
}


