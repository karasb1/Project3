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
		if (a % 2 == 0) {
			cout << a << " - ";
			SetConsoleTextAttribute(hConsole, 5);
			cout << "Even" << endl;
			a++;
			SetConsoleTextAttribute(hConsole, 7);
			continue;
		}
		if (a % 7 == 0) {
			cout << a << " - ";
			SetConsoleTextAttribute(hConsole, 9);
			cout << "%7" << endl;
			a++;
			SetConsoleTextAttribute(hConsole, 7);
			continue;
		}
		if (a % 2 != 0) {
			cout << a << " - ";
			SetConsoleTextAttribute(hConsole, 8);
			cout << "Odd" << endl;
			a++;
			SetConsoleTextAttribute(hConsole, 7);
			continue;
		}
	}
	return 0;
}