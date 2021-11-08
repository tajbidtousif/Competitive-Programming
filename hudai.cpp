    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {

        long long n, k, ans, mid;

        cin >> n >> k;

        mid = n/2;

        if(n%2 != 0)
        {
            mid++;
        }

        if(mid >= k)
        {
            ans = (2*k) - 1;
        }

        else{

            ans = (k-mid)*2;
        }

        cout << ans << endl;

    }