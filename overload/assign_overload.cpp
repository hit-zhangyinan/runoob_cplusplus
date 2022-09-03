// https://www.runoob.com/cplusplus/assignment-operators-overloading.html
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

	void operator=(const Distance& d)
	{
		feet = d.feet;
		inches = d.inches;
	}

	void displayDistance()
	{
		cout << "F : " << feet << " I : " << inches << endl;
	}
};

int main()
{
	Distance d1(11, 10), d2(5, 11);

	cout << "First distance : ";
	d1.displayDistance();

	cout << "Second distance : ";
	d2.displayDistance();

	d1 = d2;
	cout << "First distance : ";
	d1.displayDistance();

	return 0;
}
