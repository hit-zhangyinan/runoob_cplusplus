// https://www.runoob.com/cplusplus/cpp-this-pointer.html
// 2022.09.02
// this 指针是所有成员函数的隐含参数。友元函数没有 this 指针，因为友元不是类的成员。
// 只有成员函数才有 this 指针。

#include <iostream>

using namespace std;

class Box
{
private:
	double length;
	double breadth;
	double height;

public:
	Box(double l = 2.0, double b = 2.0, double h = 2.0)
	{
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
	}

	double Volume()
	{
		return length * breadth * height;
	}

	int compare(Box box)
	{
		return this->Volume() > box.Volume();
	}
};

int main()
{
	Box box1;
	Box box2(3.3, 1.2, 1.5);

	if (box1.compare(box2))
		cout << "box2 is smaller than box1" << endl;
	else
		cout << "box2 is equal to or larget than box1" << endl;

	return 0;
}
