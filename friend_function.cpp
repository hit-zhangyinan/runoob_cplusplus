// https://www.runoob.com/cplusplus/cpp-friend-functions.html
// 2022.09.02

#include <iostream>

using namespace std;

class Box
{
private:
	double width;

public:
	friend void printWidth(Box box);
	void setWidth(double wid);
};

void Box::setWidth(double wid)
{
	width = wid;
}

// Attention: printWidth() is NOT a member function of the class
void printWidth(Box box)
{
	// printWidth() is a friend of class Box, it can access any member of class Box directly
	cout << "Width of box : " << box.width << endl;
}

int main()
{
	Box box;

	box.setWidth(10.0);

	printWidth(box);

	return 0;
}
