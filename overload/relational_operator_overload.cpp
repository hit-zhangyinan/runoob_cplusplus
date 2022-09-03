// https://www.runoob.com/cplusplus/relational-operators-overloading.html
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

	void displayDistance() { cout << "F: " << feet << " I: " << inches << endl; }

	bool operator<(const Distance& d)
	{
		if (feet < d.feet)
			return true;
		if (feet == d.feet && inches < d.inches)
			return true;
		return false;
	}
	
	/*
	bool operator<(const Distance& d)
	{
		if (this->feet < d.feet)
			return true;
		if (this->feet == d.feet && this->inches < d.inches)
			return true;
		return false;
	}
	*/
	
};

int main()
{
	Distance d1(11, 10), d2(5, 11);

	if (d1 < d2)
		cout << "d1 is less than d2" << endl;
	else
		cout << "d2 is less than d1" << endl;

	return 0;
}
