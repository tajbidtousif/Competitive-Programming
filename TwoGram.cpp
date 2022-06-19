#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    int r=0;
    string ans;

    for(int i=0; i<n-1; i++)
    {
        int cnt = 0;
        for(int j=0; j<n-1; j++)
        {
            if(st[i]==st[j] && st[i+1] == st[j+1])
            {
                cnt++;
                if(r<cnt)
                {
                    r = cnt;
                    ans = string(1,st[i]) + string(1,st[i+1]);

                }
            }
        }
    }

    cout << ans << endl;

}