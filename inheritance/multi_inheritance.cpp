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

class PaintCost
{
public:
	int getCost(int area) { return area * 70; }
};

class Rectangle : public Shape, public PaintCost
{
public:
	int getArea() { return width * height; }
};

int main()
{
	Rectangle rect;

	rect.setWidth(5);
	rect.setHeight(7);

	int area = rect.getArea();

	cout << "Total area: " << rect.getArea() << endl;

	cout << "Total paint cost: $" << rect.getCost(area) << endl;

	return 0;
}
