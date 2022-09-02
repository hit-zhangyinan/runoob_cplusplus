#include <iostream>

using namespace std;

class Box
{
public:
	double length;
	double breadth;
	double height;

	double get(void);
	void set(double len, double bre, double hei);
};

double Box::get(void)
{
	return length * breadth * height;
}

void Box::set(double len, double bre, double hei)
{
	length = len;	// 把外部变量的值赋值类成员
	breadth = bre;	// 这种方式能得到正确的值
	height = hei;	
}


/*
void Box::set(double len, double bre, double hei)
{
	len = length;	// 这是错误的写法
	bre = breadth;	// 类成员没有获得正确的值
	hei = height;
}
*/


int main()
{
	Box box;
	box.set(16.0, 8.0, 12.0);
	double volume = box.get();
	cout << "the volume of box is " << volume << endl;
	return 0;
}
