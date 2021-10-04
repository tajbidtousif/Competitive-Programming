#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m;
        for (size_t i = 1; i <= n; i*=2)
        {
            m=i;
        }
        cout<<max(n-m+1,m/2)<<endl;
    }   

    return 0;
} 