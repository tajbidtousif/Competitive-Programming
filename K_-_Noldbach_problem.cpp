#include<bits/stdc++.h>
using namespace std;

const int mx = 2000;
bool status[mx];
vector <int> prime;

void sieve()
{
     int sq = sqrt(mx*1.0)+1;
    
    status[1] = 1;
    prime.push_back(2);

    for(int i=4; i<=mx; i+=2)
    {
        status[i] = 1;        
    }

    for(int i=3; i<sq; i+=2)
    {
        if(status[i]==0)
        {
            // prime.push_back(i);
            for(int j=i*i; j<mx; j+=i)
            {
                status[j] = 1;
            }
        }
    }
    for(int i=3; i<mx; i++)
    {
        if(status[i]==0)
        {
            prime.push_back(i);
        }
    }
    
}


int main()
{
    int n, k, cnt=0;
    cin >> n >> k;

    sieve();

    for(int i=0; i<20; i++)
    {
        cout << prime[i] << "  ";
    }

    cout << endl;

    for(int i=0; prime[i]<=n; i++)
    {
     int ans = prime[i]+prime[i+1]+1;
  
         if(!status[ans])
         {
             //cout<<ans<<" ";
             cnt++;
         }
     

    }

    if(k<=cnt)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
   
}