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
	length = len;	
	breadth = bre;	
	height = hei;	
}

int main()
{
	Box box;
	box.set(16.0, 8.0, 12.0);
	double volume = box.get();
	cout << "the volume of box is " << volume << endl;
	return 0;
}
