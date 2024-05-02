#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int s = 0;
	while (a <= 500) {
		s += a;
		a++;
	}
	cout << s << endl;
	return 0;
}