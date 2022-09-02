// https://www.runoob.com/cplusplus/cpp-static-members.html
// 2022.09.02
// 静态成员在类的所有对象中是共享的
// 不能把静态成员的初始化放置在类的定义中，但是可以在类的外部通过使用范围解析运算符 :: 来重新声明静态变量从而对它进行初始化

// 静态成员函数即使在类对象不存在的情况下也能被调用，静态函数只要使用类名加范围解析运算符 :: 就可以访问
// 静态成员函数没有 this 指针，只能访问静态成员数据、其他静态成员函数和类外部的其他函数
// 普通成员函数有 this 指针，可以访问类中的任意成员

#include <iostream>

using namespace std;

class Box
{
private:
	double length;
	double breadth;
	double height;

public:
	static int objectCount;

	Box(double l = 2.0, double b = 2.0, double h = 2.0)
	{
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
		objectCount++;
	}

	double Volume()
	{
		return length * breadth * height;
	}

	static int getCount()
	{
		return objectCount;
	}
};

int Box::objectCount = 0;

int main()
{
	cout << "Initial Count: " << Box::getCount() << endl;

	Box box1;
	Box box2(3.3, 1.2, 1.5);
	Box box3(2.7, 4.5, 6.3);

	cout << "Final Count: " << Box::getCount() << endl;

	return 0;
}
