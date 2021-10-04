#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a+b+c<=d)
            puts("1");
        else if(a+b<=d || a+c<=d || b+c<=d)
            puts("2");
        else 
            puts("3");
    }   

    return 0;
} 