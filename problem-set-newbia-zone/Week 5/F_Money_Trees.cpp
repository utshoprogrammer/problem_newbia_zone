#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        long long int n,k; cin >> n >> k;
        vector<long long int> v(n);
        vector<long long int> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        } 
        long long int l = 0,r = 0,ans = 0,sum = 0;

        while (r < n)
        {    
            if(r > 0 && h[r-1] % h[r] != 0)
            {
                l = r;
                sum = 0;
            }
            sum += v[r];
            while (sum > k)
            {
                sum -= v[l];
                l++;
            }
            ans = max(ans,1LL*(r-l+1));
            r++;
        }

        cout << ans << '\n';

    }

    return 0;
}