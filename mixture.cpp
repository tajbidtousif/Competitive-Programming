#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if(!a)
            puts("Liquid");
        else if(!b)
            puts("Solid");
        else
            puts("Solution");
    }   

    return 0;
} 