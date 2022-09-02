// https://www.runoob.com/cplusplus/cpp-constructor-destructor.html
// 2022.09.02

#include <iostream>

using namespace std;

class Line
{
private:
	double length;

public:
	void setLength(double len);
	double getLength(void);
	Line(double len);		// constructor
	~Line();				// destructor
};

Line::Line(double len)
{
	cout << "Object is being created, length = " << len << endl;
	length = len;
}

Line::~Line(void)
{
	cout << "Object is being deleted" << endl;
}

void Line::setLength(double len)
{
	length = len;
}

double Line::getLength(void)
{
	return length;
}

int main(void)
{
	Line line(10.0);        // 在此处执行构造函数
	cout << "Length of line : " << line.getLength() << endl;

	line.setLength(6.0);
	cout << "Length of line : " << line.getLength() << endl;

	return 0;               // 在 return 语句处执行析构函数
}
