// https://www.runoob.com/cplusplus/cpp-inheritance.html
// 2022.09.02

#include <iostream>

using namespace std;

class Shape
{
protected:
	int width;
	int height;

public:
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
};

class Rectangle : public Shape
{
public:
	int getArea() { return width * height; }
};

int main()
{
	Rectangle rect;

	rect.setWidth(5);
	rect.setHeight(7);

	cout << "Total area: " << rect.getArea() << endl;

	return 0;
}
