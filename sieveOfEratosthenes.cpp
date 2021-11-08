#include<bits/stdc++.h>
using namespace std;

const int mx = 1e8 + 10;
bool status[mx];

int main()
{
    int sq = sqrt(mx*1.0)+1;
    
    status[1] = 1;

    for(int i=4; i<mx; i+=2)
    {
        status[i] = 1;        
    }

    for(int i=3; i<sq; i+=2)
    {
        if(status[i]==0)
        {
            for(int j=i*i; j<mx; j+=i*2)
            {
                status[i] = 1;
            }
        }
    }

   for(int i=0; i<10; i++)
   {
       if(status[i] == 0)
       {
           cout << status[mx] << " ,";
       }
   }
    
    return 0;
} 