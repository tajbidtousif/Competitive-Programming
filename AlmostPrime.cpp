#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a, amount(0);
    cin >> a;

    bool b[3001] = {false};
    int pfactors[3001] = {0};
    for (int i = 2; i <= a; ++i)
    {
        if (!b[i])
        {
            for (int j = i + i; j <= a; j += i)
            {
                b[j] = true;
                pfactors[j] += 1;
            }
        }

        if (pfactors[i] == 2)
        {
            amount += 1;
        }
    }
    cout << amount << endl;

    
}