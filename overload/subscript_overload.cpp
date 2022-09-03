// https://www.runoob.com/cplusplus/subscripting-operator-overloading.html
// 2022.09.03

#include <iostream>

using namespace std;

const int SIZE = 10;

class safearray
{
private:
	int arr[SIZE];

public:
	safearray()
	{
		int i;
		for (i = 0; i < SIZE; i++)
			arr[i] = i;
	}

	int& operator[](int i)
	{
		if (i >= SIZE)
		{
			cout << endl;
			cout << "subscript out of range" << endl;
			return arr[0];
		}
		return arr[i];
	}
};

int main()
{
	safearray A;

	cout << "A[2] = " << A[2] << endl;
	cout << "A[5] = " << A[5] << endl;
	cout << "A[12] = " << A[12] << endl;

	return 0;
}
