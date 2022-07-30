#include <iostream>
#include "time.h"

using namespace std;

int main()
{
	int lp;
	cin >> lp;
	for (int i = 0; i < lp; i++)
	{
		int a, b;
		cin >> a >> b;
		int c;
		c = a;
		for (int j = 1; j < b; j++)
		{
			a = a * c;
		}
		cout << a % 10 << endl;
	}
}