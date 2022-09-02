// https://www.runoob.com/cplusplus/cpp-copy-constructor.html
// 2022.09.02

#include <iostream>

using namespace std;

class Line
{
private:
	int* ptr;

public:
	int getLength(void);
	Line(int len);
	Line(const Line& obj);
	~Line();
};

Line::Line(int len)
{
	cout << "call constructor" << endl;

	ptr = new int;
	*ptr = len;
}

Line::Line(const Line& obj)
{
	cout << "call copy constructor and allocate memory for ptr" << endl;
	ptr = new int;
	*ptr = *obj.ptr;
}

Line::~Line(void)
{
	cout << "free memory" << endl;
	delete ptr;
}

int Line::getLength(void)
{
	return *ptr;
}

void display(Line obj)
{
	cout << "the size of line is " << obj.getLength() << endl;
}

int main()
{
	Line line(10);

	display(line);

	return 0;
}
