// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"DD.h"
using namespace std;

#define PI 3.15
#define Name "asdfasdfasdfasdf"
#define sasda "asdfs"
#define ADD(x,y) ((x)+(y))

union UU {
	char name[12];
	int age;
}uu = {"sdf"};

enum SS {A=0,B,C};


int main()
{
    std::cout << "Hello World!\n"; 
	D d;
	decltype(d) d1;
	d1.setDName("DDDDDDD");
	d.setDName("DDDD");
	cout << d.getDName() << endl;
	cout << d1.getDName() << endl;
	uu.age = 11;
	UU u1 = { "abfga" };
	u1.age = 12;
	strcpy_s(uu.name, "asdf");
	cout << uu.age << uu.name << endl;
	cout << u1.age << u1.name << endl;

	SS s = SS::B;
	//s = (SS)0;
	if (s == SS::A)
	{
		cout << "A" << endl;
	}
	char* NNN;
	char NN[] = "asdfasdfasdf";
	NNN = NN;
	cout << NNN << endl;
	
	cout << Name << endl;
	cout << ADD(2, 5) << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
