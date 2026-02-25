#include <iostream>
#include <cstdint>
#include <cstdarg>

//int main()
//{
//    std::cout << "Hello World!\n";
//    return 0;
//}

/*
argc‌（argument count）：命令行参数的数量（包括程序名本身）。
‌argv‌（argument vector）：指向字符串数组的指针，存储所有命令行参数。
*/
//void aftermain()
//{
//	std::cout << "call aftermain()\n";
//}
//
//class CBeforeMain
//{
//public:
//	CBeforeMain()
//	{
//		std::cout << "call CBeforeMain()\n";
//	}
//};
//
//CBeforeMain beforeMain;
//
//int main(int argc, char* argv[])
//{
//	atexit(aftermain);
//	std::cout << "Hello World!\n";
//	std::cout << "argc: " << argc << std::endl;
//	for (int i = 0; i < argc; i++)
//	{
//		std::cout << "argv["<<i<<"]:"<< argv[i] << std::endl;
//	}
//	return 0;
//}

//int main()
//{
//	int iAge;
//	float fSalary;
//	//std::cout << "iAge: " << iAge << std::endl;
//	//std::cout << "fSalary: " << fSalary << std::endl;
//
//	iAge = 8;
//	fSalary = 3.2;
//	int iTotal = 0;
//	float fTotal = 0.0;
//	fTotal = iAge + fSalary;
//	iTotal = iAge + fSalary;
//	std::cout << "iAge: " << iAge << std::endl;
//	std::cout << "fSalary: " << fSalary << std::endl;
//	std::cout << "fTotal: " << fTotal << std::endl;
//	std::cout << "iTotal: " << iTotal << std::endl;
//
//	return 0;
//}

//int main()
//{
//	int8_t iInt8;
//	uint8_t uiInt8;
//	int16_t iInt16;
//	uint16_t uiInt16;
//	int32_t iInt32;
//	uint32_t uiInt32;
//	int64_t iInt64;
//	uint64_t uiInt64;
//	int iInt;
//	float fFloat;
//
//	std::cout << "sizeof（iInt8）:" << sizeof(iInt8) << std::endl;
//	std::cout << "sizeof（uiInt8）:" << sizeof(uiInt8) << std::endl;
//	std::cout << "sizeof（iInt16）:" << sizeof(iInt16) << std::endl;
//	std::cout << "sizeof（uiInt16）:" << sizeof(uiInt16) << std::endl;
//	std::cout << "sizeof（iInt32）:" << sizeof(iInt32) << std::endl;
//	std::cout << "sizeof（uiInt32）:" << sizeof(uiInt32) << std::endl;
//	std::cout << "sizeof（iInt64）:" << sizeof(iInt64) << std::endl;
//	std::cout << "sizeof（uiInt64）:" << sizeof(uiInt64) << std::endl;
//
//	std::cout << "sizeof（int）:" << sizeof(iInt) << std::endl;
//	std::cout << "sizeof（float）:" << sizeof(fFloat) << std::endl;
//
//	return 0;
//}

//typedef struct {
//	char    cName[5];
//	uint8_t uiAge;
//	float   fHeignt;
//} SStudent;
//
//typedef struct {
//	char     cChar;
//	uint32_t uiInt32;
//} SInt32AndChar;
//
//typedef struct {
//	char     cChar;
//	uint16_t uiInt16;
//} SInt16AndChar;
//
//int main()
//{
//	SStudent struStudent;
//	std::cout << "sizeof（SStudent）:" << sizeof(struStudent) << std::endl;
//
//	SInt32AndChar struInt32AndChar;
//	std::cout << "sizeof（SInt32AndChar）:" << sizeof(struInt32AndChar) << std::endl;
//
//	SInt16AndChar struInt16AndChar;
//	std::cout << "sizeof（SInt16AndChar）:" << sizeof(struInt16AndChar) << std::endl;
//
//	return 0;
//}

//class CStudent {
//public:
//	// 构造函数（初始化成员变量）
//	CStudent(std::string sName, int uiAge, float fHeignt)
//		: m_sName(sName), m_uiAge(uiAge), m_fHeignt(fHeignt) {}
//
//	// 成员函数
//	void printInfo();
//
//private:
//	std::string m_sName;
//	uint8_t m_uiAge;
//	float   m_fHeignt;;
//};
//
//void CStudent::printInfo() 
//{
//	std::cout << "sizeof（m_sName）:" << sizeof(m_sName) << std::endl;
//	std::cout << "sizeof（m_uiAge）:" << sizeof(m_uiAge) << std::endl;
//	std::cout << "sizeof（m_fHeignt）:" << sizeof(m_fHeignt) << std::endl;
//}
//
//int main()
//{
//	CStudent student1("ZhangSan",12,163.5);
//	student1.printInfo();
//	std::cout << "sizeof（student1）:" << sizeof(student1) << std::endl;
//
//	return 0;
//}

//class CBase
//{
//public:
//	~CBase()
//	{
//		std::cout << "CBase destructor\n";
//	}
//};
//class CDerived : public CBase
//{
//public:
//	~CDerived()
//	{
//		std::cout << "CDerived destructor\n";
//	}
//};
//
//class CVBase
//{
//public:
//	virtual ~CVBase()// 声明为虚函数
//	{
//		std::cout << "CVBase destructor\n";
//	}  
//};
//class CVDerived : public CVBase
//{
//public:
//	~CVDerived() override
//	{
//		std::cout << "CVDerived destructor\n";
//	}
//};
//
//int main()
//{
//	CBase* ptr1 = new CDerived();
//	delete ptr1;  // 输出：Base destructor（Derived析构未调用）
//	CVBase* ptr2 = new CVDerived();
//	delete ptr2;  // 输出：Base destructor（Derived析构未调用）
//}

//int add(int iAddNum1, int iAddNum2)
//{
//	iAddNum1 = iAddNum1 + 1;
//	std::cout << "int add(int iAddNum1, int iAddNum2):  iAddNum1=" << iAddNum1 << std::endl;
//	std::cout << "&iAddNum1:  " << &iAddNum1 << std::endl;
//	return 1;
//}
//
////int add(int iAddNum1)
////{
//	//iAddNum1 = iAddNum1 + 1;
//	//std::cout << "int add(int iAddNum1): iAddNum1= " << iAddNum1 << std::endl;
//	//std::cout << "&iAddNum1:  " << &iAddNum1 << std::endl;
//	//return 1;
////}
//
//int add(int& iAddNum1)
//{
//	iAddNum1 = iAddNum1 + 1;
//	std::cout << "int add(int& iAddNum1): iAddNum1= " << iAddNum1 << std::endl;
//	std::cout << "&iAddNum1:  " << &iAddNum1 << std::endl;
//	return 1;
//}
//
//int add(int* iAddNum1)
//{
//	if (!iAddNum1) return 0;   //C/C++一定要防止使用空指针
//	*iAddNum1 = *iAddNum1 + 1;
//	std::cout << "int add(int* iAddNum1):  *iAddNum1=" << *iAddNum1 << std::endl;
//	std::cout << "iAddNum1:  " << iAddNum1 << std::endl;
//
//	return 1;
//}
//
//int main()
//{
//	int i1 = 0, i2 = 0;
//	int* i3 = NULL;
//
//	std::cout << "&i1: " << &i1 << std::endl;
//	std::cout << "i3: " << i3 << std::endl;
//	std::cout << "&i3: " << &i3 << std::endl;
//	std::cout << std::endl;
//
//	std::cout << "1 before int add(i1, i2):  i1=" << i1 << std::endl;
//	add(i1, i2);
//	std::cout << "1 after int add(i1, i2): i1=" << i1 << std::endl;
//	std::cout << std::endl;
//
//	std::cout << "2 before int add(i1): i1=" << i1 << std::endl;
//	add(i1);
//	std::cout << "2 after int add(i1): i1=" << i1 << std::endl;
//	std::cout << std::endl;
//
//	std::cout << "3 before int 	add(&i1): i1=" << i1 << std::endl;
//	add(&i1);
//	std::cout << "3 after int 	add(&i1): i1=" << i1 << std::endl;
//	std::cout << std::endl;
//
//	std::cout << "4 before int add(i3): i3=" << i3 << std::endl;
//	add(i3);
//	std::cout << "4 after int add(i3): i3=" << i3 << std::endl;
//}

//int iArray[5] =
//{
//	0,1,2,3,4
//};
//
//int main()
//{
//	int* iP01 = &iArray[0];
//	std::cout << "iP01=" << iP01 << " *iP01=" << *iP01 << std::endl;
//	int* iP02 = iArray;
//	std::cout << "iP02=" << iP02 << " *iP02=" << *iP02 << std::endl;
//	std::cout << std::endl;
//
//	int* iP31 = &iArray[3];
//	std::cout << "iP31=" << iP31 << " *iP31=" << *iP31 << std::endl;
//	int* iP32 = iArray+3;
//	std::cout << "iP32=" << iP32 << " *iP32=" << *iP32 << std::endl;
//}

//int add1(int iNum)
//{
//	iNum = iNum + 1;
//	std::cout << "add1(int iNum) rertur:" << iNum << std::endl;
//	return iNum;
//}
//
//int add2(int iNum)
//{
//	iNum = iNum + 2;
//	std::cout << "add2(int iNum) rertur:" << iNum << std::endl;
//	return iNum;
//}

//int main()
//{
//	int k;
//	k = 22 / 3;
//	std::cout << "22 / 3 = " << k << std::endl;
//	k = 22 % 3;
//	std::cout << "22 % 3 = " << k << std::endl;
//
//	//k = 22 / 0;
//	//k = 22 % 0;
//}

//int main()
//{
//	float fNum = 0.1 + 0.2;
//
//	if (0.3 == fNum)
//	{
//		std::cout << "0.3 == fNum" << std::endl;
//	}
//	else
//	{
//		std::cout << "0.3 != fNum" << std::endl;
//	}
//}

void OutputMsg(const char* format, ...)
{
	char  cLogMsg[1024];
	va_list  args;
	va_start(args, format);
	vsprintf(cLogMsg, format, args);
	va_end(args);
	printf(cLogMsg);
}

int main()
{
	OutputMsg(" %s Variable Para %d!", "This is", 5);
	return 0;
}
