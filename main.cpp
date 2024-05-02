#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int a;
	int i = 0;
	cin >> a;
	if (a > 0)
	{
		while (i <= a) {
			cout << i << " ";
			i++;
		}
	}
	else {
		while (i >= a) {
			cout << i << " ";
			i--;
		}
	}
	return 0;
}