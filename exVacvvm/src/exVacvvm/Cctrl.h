#pragma once

#ifdef EV_PLATFORM_WIN
	#ifdef EV_BUILD_DLL
		#define EV_API __declspec(dllexport)
	#else
		#define EV_API __declspec(dllimport)
	#endif
#else 
	#error exVacvvm only supports Windows.
#endif
