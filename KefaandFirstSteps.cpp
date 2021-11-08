#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, cnt=1, maax=1;

    cin >> n;
    int ar[n+1];

    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for(int i=0; i<n-1; i++)
    {
        if(ar[i] <= ar[i+1])
        {
            cnt++;
            maax = max(maax, cnt);
        }

         else
         {

             cnt = 1;
         }
    }

    cout << maax << endl;
  

}