// example2.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "example2.h"

#include <iostream>


// 这是导出变量的一个示例
EXAMPLE2_API int nexample2=0;

// 这是导出函数的一个示例。
EXAMPLE2_API int fnexample2(void)
{
	std::cout << "fnexample2 Hello World!\n";
    return 0;
}

// 这是已导出类的构造函数。
Cexample2::Cexample2()
{
    return;
}
