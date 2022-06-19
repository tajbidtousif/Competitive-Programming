#include<bits/stdc++.h>
using namespace std;

const int mx = 2000;
bool status[mx];
vector <int> prime;

void sieve()
{
    for(int i = 2; i < mx; i++)
    {
        if(!status[i])
        {
            prime.push_back(i);
            for(int j = i*i; j < mx; j += i)
                status[j] = 1;
        }
    }
    for(int i=2; i<mx; i++)
        if(!status[i])
            prime.push_back(i);
}


int main()
{
    int n, k, cnt=0;
    cin >> n >> k;

    sieve();

    for(int i=0; i<prime.size()-1; i++)
    {
        int jora=prime[i]+prime[i+1]+1;
       
        if(jora>n)
            break;
       
        if(status[jora]==0)
        {
            cout << jora << " ";
            cnt++;
        }
    }

    if(k<=cnt)
    {
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
   
}