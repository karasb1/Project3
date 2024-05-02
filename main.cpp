#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int d = 1;
	if (a < 1 || a>20) {
		cout << "Enter number from 1 to 20";
		return 0;
	}
	while (a <= 20) {
		d *= a;
		a++;
	}
	cout << d << endl;
	return 0;
}