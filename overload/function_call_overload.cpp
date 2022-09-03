// https://www.runoob.com/cplusplus/function-call-operator-overloading.html
// 2022.09.03

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

	Distance operator()(int a, int b, int c)
	{
		Distance d;
		d.feet = a + c + 10;
		d.inches = b + c + 100;
		return d;
	}

	void displayDistance()
	{
		cout << "F : " << feet << " I : " << inches << endl;
	}
};

int main()
{
	Distance d1(11, 10), d2;

	cout << "First distance : ";
	d1.displayDistance();

	d2 = d1(10, 10, 10);
	cout << "Second distance : ";
	d2.displayDistance();

	return 0;
}
