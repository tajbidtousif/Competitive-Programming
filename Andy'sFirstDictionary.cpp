#include<bits/stdc++.h>
using namespace std;

    string Lower(string s)
    {
        string o = "";

        for(auto c:s)
        {
            o+=tolower(c);
        }

        return o;
    }

    int main()
    {
        string s;
        set <string> dic;

        while(getline(cin, s))
        {
            for(int i=0; s[i]; i++)
            {
                if(isalpha(s[i]))
                {
                    n += s[i];
                }
            }

            else{
                dic.insert(Lower(n));
                n = "";
            }
        }

        dic.insert(Lower(n));

        for(auto x : dic)
        {
            if(x.size())
            {
                cout << x << endl;
            }
        }


return 0;


    }
