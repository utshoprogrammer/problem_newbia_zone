#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;

        vector<long long int> v(n), d(k);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> d[i];
        }
        sort(v.rbegin(), v.rend());
        sort(d.begin(), d.end());

        vector<long long int> pre(n + 1,0);
        for (int i = 0; i < n; i++)
        {
            pre[i+1] = pre[i] + v[i];
        }
        int x = 0;
        long long int ans = 0;
        for (int i = 0; i < k; i++)
        {
            if (x + d[i] > n)
            {
                break;
            }
            ans += pre[x + (d[i] - 1)] - pre[x];

            x += d[i];
        }
        ans += pre[n] - pre[x];

        cout << ans << endl;
    }

    return 0;
}