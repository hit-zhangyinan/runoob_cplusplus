// https://www.runoob.com/cplusplus/increment-decrement-operators-overloading.html
// 2022.09.03

#include <iostream>

using namespace std;

class Time
{
private:
	int hours;
	int minutes;

public:
	Time() { hours = 0; minutes = 0; }
	Time(int h, int m) { hours = h; minutes = m; }

	void displayTime() { cout << "H: " << hours << " M: " << minutes << endl; }

	Time operator++()
	{
		++minutes;
		if (minutes >= 60)
		{
			++hours;
			minutes -= 60;
		}
		return Time(hours, minutes);
	}

	Time operator++(int)
	{
		Time T(hours, minutes);

		++minutes;
		if (minutes >= 60)
		{
			++hours;
			minutes -= 60;
		}
		return T;
	}
};

int main()
{
	Time t1(11, 59), t2(10, 40);

	++t1;
	t1.displayTime();

	++t1;
	t1.displayTime();

	t2++;
	t2.displayTime();

	t2++;
	t2.displayTime();

	return 0;
}
