// example3.cpp : 定义 DLL 的导出函数。
//
#include "example3.h"

#include <iostream>

// 这是导出函数的一个示例。
EXAMPLE3_API int fnexample3(void)
{
	std::cout << "fnexample3 Hello World!\n";
    return 0;
}