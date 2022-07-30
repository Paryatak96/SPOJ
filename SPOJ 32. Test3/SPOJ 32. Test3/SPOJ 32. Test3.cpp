#include <iostream>

using namespace std;

int main()
{
    int i = 0;
	int a, b;
	do
	{
		
		cin >> a;
		if ((a < 10) || (a > 99))
		{
			return 0;
		}
		cin >> b;
		if ((b < 10) || (b > 99))
		{
			return 0;
		}
		if (b == 42)
		{
			if (a != 42)
			{
				i++;
			}	
		}
		a = 0;
		b = 0;
	} while (i < 3);
}

