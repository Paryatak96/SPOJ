#include <iostream>


using namespace std;

bool czyPierwsza(int a)
{
	if (a < 2)
	{
		return false;
	}

	for (int i = 2; i * i <= a; i++)
	{
		if (a % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	if (n > 100000)
	{
		return 0;
	}
	for (int j = 0; j < n; j++)
	{
		int p;
		cin >> p;
		if (p > 10000)
		{
			return 0;
		}
		if (czyPierwsza(p) == 1)
		{
			cout << "TAK" << endl;
		}
		else
		{
			cout << "NIE" << endl;
		}
	}
}
