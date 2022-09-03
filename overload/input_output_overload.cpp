// https://www.runoob.com/cplusplus/input-output-operators-overloading.html
// 2022.09.03
// 需要把运算符重载函数声明为类的友元函数，这样就能不用创建对象而直接调用函数

#include <iostream>

using namespace std;

class Distance
{
private:
	int feet;
	int inches;

public:
	Distance() { feet = 0; inches = 0; }
	Distance(int f, int i) { feet = f; inches = i; }

	friend ostream& operator<<(ostream& output, const Distance& d)
	{
		output << "F : " << d.feet << " I : " << d.inches;
		return output;
	}

	friend istream& operator>>(istream& input, Distance& d)
	{
		input >> d.feet >> d.inches;
		return input;
	}
};

int main()
{
	Distance d1(11, 10), d2(5, 11), d3;

	cout << "Enter the value of object : " << endl;
	cin >> d3;
	cout << "First distance : " << d1 << endl;
	cout << "Second distance : " << d2 << endl;
	cout << "Third distance : " << d3 << endl;

	return 0;
}
