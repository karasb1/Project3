#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
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
	while (a < b) {
		SetConsoleTextAttribute(hConsole, 0x05);
		if (a % 2 == 0) {
			cout << a << " ";
		}
		a++;
	}
	SetConsoleTextAttribute(hConsole, 0x07);
	while (a < b) {
		if (a % 2 != 0) {
			cout << a << " ";
		}
		a++;
	}
	while (a < b) {
		if (a % 7 == 0) {
			cout << a << " ";
		}
		a++;
	}
	return 0;
}