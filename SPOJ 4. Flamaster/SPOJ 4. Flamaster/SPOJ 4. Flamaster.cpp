#include <iostream>

using namespace std;

int main()
{
    char zdanie[200]; 
    int zlicz[123] = {};
    int C;
    cin >> C;

    for (int k = -1; k < C; k++)
    {
        cin.getline(zdanie, 123);
        int i = 0;
        while (zdanie[i])
        {
            ++zlicz[zdanie[i]];
            ++i;
        }
        for (int i = 65; i < 91; i++)
        {
            if (zlicz[i] > 0)
            {
                if (zlicz[i] == 1)
                {
                    cout << (char)i;
                }
                else if (zlicz[i] == 2)
                {
                    cout << (char)i << (char)i;
                }
                else
                {
                    cout << (char)i << zlicz[i];
                }
            }
            zlicz[i] = 0;
        }
        cout << endl;
    }      
}


