#include <iostream>

using namespace std;

int main()
{
	int testy;
	cin >> testy;
	if (testy > 100)
	{
		return 0;
	}
	int ile_liczb = 0, a = 0, b = 0;
	while (testy--)
	{
		cin >> ile_liczb;
		for (int i = 0; i < ile_liczb; i++)
		{
			cin >> a;
			b = a + b;
		}
		cout << b << endl;
		a = 0;
		b = 0;
	}
}


