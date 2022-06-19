#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,k1,k2;
    cin >> n1 >> n2 >> k1 >> k2;
    int firstsub=0, secsub=0;
    firstsub = n1, secsub = n2;

    for(int i=1, j=1; i<=n1, j<=n2; i++, j++)
    {
        firstsub = firstsub-k1; // 2-2 = 0
        secsub = secsub-k2; //2-2 = 0
        
        if(firstsub<k2)
        {
            cout << "Second" << endl;
            break;
        }
        else if(secsub<k1)
        {
            cout << "First" << endl;
            break;
        }

    }
}