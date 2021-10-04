#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x;cin>>x;
        if(x<2)
            cout<<x+1<<endl;
        else
        {
            int m;
            for (int i = 2; i < x; i*=2)
            {
                m=i;
            }
            cout<<m*2<<endl;
        }
    }   

    return 0;
} 