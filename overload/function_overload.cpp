// https://www.runoob.com/cplusplus/cpp-overloading.html
// 2022.09.03

#include <iostream>

using namespace std;

class printData
{
public:
	void print(int i) { cout << "integer is: " << i << endl; }
	void print(double f) { cout << "float-point number is: " << f << endl; }
	void print(const char c[]) { cout << "const string is: " << c << endl; }
	void print(char c[]) { cout << "string is: " << c << endl; }
};

int main()
{
	printData pd;
	pd.print(5);
	pd.print(500.263);
	pd.print("Hello C++");

	char s[] = "hello c++";
	pd.print(s);

	return 0;
}
