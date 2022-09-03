// https://www.runoob.com/cplusplus/cpp-interfaces.html
// 2022.09.03
// 如果类中至少有一个函数被声明为纯虚函数，则这个类就是抽象类。纯虚函数是通过在声明中使用 "= 0" 来指定的
// 抽象类不能被用于实例化对象，它只能作为接口使用。如果试图实例化一个抽象类的对象，会导致编译错误。
// 如果没有在派生类中重写纯虚函数，就尝试实例化该类的对象，会导致编译错误。
// 可用于实例化对象的类被称为具体类。
// 基类 Shape 提供了一个接口 getArea()，在两个派生类 Rectangle 和 Triangle 中分别实现了 getArea()：

#include <iostream>

using namespace std;

class Shape
{
protected:
	int width;
	int height;

public:
	virtual int getArea() = 0;
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
};

class Rectangle : public Shape
{
public:
	int getArea() { return width * height; }
};

class Triangle : public Shape
{
public:
	int getArea() { return width * height / 2; }
};

int main()
{
	Rectangle rect;
	Triangle tri;

	rect.setWidth(5);
	rect.setHeight(7);
	cout << "Total Rectangle area: " << rect.getArea() << endl;

	tri.setWidth(5);
	tri.setHeight(7);
	cout << "Total Triangle area: " << tri.getArea() << endl;

	return 0;
}
