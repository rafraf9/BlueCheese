#pragma once

#ifdef BC_PLATFORM_WINDOWS
	#ifdef BC_BUILD_DLL
		#define BC_API __declspec(dllexport)
	#else
		#define BC_API __declspec(dllimport)
	#endif
#else
	#error BlueCheese only supports windows!;
#endif

#define BIT(x) (1 << (x))