#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    for(int i=0; i<tc; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;

        if()
    
        int m = max(a,max(b,c));

        if(m == a && m == b)
        {
            
        }

        a = m - a;
        b = m - b;
        c = m - c;

        if(a==0)
        {
            a = a-1;
        } 

        if(b==0)
        {
            b = b-1;
        }

        if(c==0)
        {
            c = c-1;
        }

        if(a==b && b==c)
        {
            a = 0;
            b = 0;
            c = 0;
        }

        cout << a+1 << " " << b+1 << " " << c+1 << endl;  

        
    }
    
} 