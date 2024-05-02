#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int a;
	int s = 0;
	while (true) {
		cout << "Enter your number: ";
		cin >> a;
		if (a == 0) {
			cout << s << endl;
			break;
		}
		s += a;
		a++;
	}
	return 0;
}