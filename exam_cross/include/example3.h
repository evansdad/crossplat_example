#pragma once
//#ifdef EXAMPLE3_EXPORTS
//#define EXAMPLE3_API __declspec(dllexport)
//#else
//#define EXAMPLE3_API __declspec(dllimport)
//#endif

#if defined(WIN32)                           
#	if defined(EXAMPLE3_EXPORTS)
#		define  EXAMPLE3_API __declspec(dllexport)  //Windows‌：需显式声明__declspec(dllexport)以导出符号，否则外部调用失败。
#	else
#		define	EXAMPLE3_API __declspec(dllimport) 
#	endif
#elif defined(__linux)
#	define EXAMPLE3_API        // ‌Linux‌：默认所有符号可见，无需额外声明，但可使用符号隐藏机制优化接口。
#endif

EXAMPLE3_API int fnexample3(void);
