#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int k;
	cin >> k;
	int i = 1;
	while (i <= 10) {
		cout << k << " x " << i << " = " << k * i << endl;
		i++;
	}
	return 0;
}