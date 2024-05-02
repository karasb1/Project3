#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	cout << "Enter 1 number: ";
	cin >> a;
	cout << "Enter 2 number: ";
	cin >> b;
	if (b < a) {
		c = a;
		a = b;
		b = c;
	}
	c = 0;
	while (a <= b) {
		c += a;
		a++;
	}
	cout << c << endl;
	return 0;
}