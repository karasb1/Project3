#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int x;
	int y;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	int s = 1;
	int x1 = x;
	while (s < y) {
		x *= x1;
		s++;
	}
	cout << x << endl;
	return 0;
}