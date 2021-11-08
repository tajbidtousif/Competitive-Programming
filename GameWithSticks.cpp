#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;

    cin >> m >> n;

    int ans= min(n, m);

   cout<< (ans&1 ? "Akshat" : "Malvika");

    return 0;
}