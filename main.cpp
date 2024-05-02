#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	int i = 1;
	int k = 1;
	float s = 1;
	while (i <= 1000) {
		i++;
		k++;
		s += i;
	}
	cout << s / k << endl;
	return 0;
}