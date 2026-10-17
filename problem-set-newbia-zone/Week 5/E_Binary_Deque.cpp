#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int l = 0, r = 0, ans = n+n, sum = 0;
        while (r < n)
        {
            sum += v[r];
            if(sum == s)
            {
                ans = min(ans,n-(r-l+1));

            }
            else if(sum > s)
            {
                while(sum > s)
                {
                    sum -= v[l];
                    l++;
                }
            }
            r++;
        }
        if(ans == n+n)
        {
            cout << -1 << endl;
        }
        else{
            cout << ans << endl;
        }
    }

    return 0;
}