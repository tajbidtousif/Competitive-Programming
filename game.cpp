#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        int cnt1=0,cnt2=0;
        string s;
        cin >> s;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
                {
                    cnt1++;
                }
            else if(s[i]=='0')
                {
                    cnt2++;
                }
        }
        int minn=min(cnt1,cnt2);

        //cout << cnt1 << " " << cnt2 << endl;
        
        if(minn%2==0)
        {
            cout << "NET" << endl;
        }
        else{
            cout << "DA" << endl;
        }
        
    }

    return 0;
}