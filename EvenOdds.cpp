#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, t, ans;

    cin >> n >> k;
    
    t = n/2;

    if(n%2!=0)
    {
        t++;
    }

    if(t > k)
    {
         ans = (2*k)-1;
    }

    else
    {
        int m = k-t;
         ans = m*2; 
    }

    cout << ans << endl;

}