#include <iostream>

using namespace std;

int main()
{
	int D;
	cin >> D;
	int s[30];
	unsigned int sil[30];
	for (int n = 0; n < 30; n++)
	{
		sil[n] = 1;
	}
	if ((D < 1) || (D > 30))
	{
		return 0;
	}
	for (int j = 1; j <= D; j++)
	{
		cin >> s[j];
	}
	for (int k = 1; k <= D; k++)
	{
		for (int i = s[k]; i > 1; i--)
		{
			sil[k] *= i;
		}
	}
	for (int p = 1; p <= D; p++)
	{
		cout << sil[p] / 10 << " " << sil[p] % 10 << endl;
	}
}

