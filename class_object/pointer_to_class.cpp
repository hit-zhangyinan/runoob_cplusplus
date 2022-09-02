// https://www.runoob.com/cplusplus/cpp-pointer-to-class.html
// 2022.09.02

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
};

int main()
{
	Box box1;
	Box box2(3.3, 1.2, 1.5);
	Box* ptrBox;
	
	ptrBox = &box1;
	cout << "Volume of box1: " << ptrBox->Volume() << endl;

	ptrBox = &box2;
	cout << "Volume of box2: " << ptrBox->Volume() << endl;

	return 0;
}
