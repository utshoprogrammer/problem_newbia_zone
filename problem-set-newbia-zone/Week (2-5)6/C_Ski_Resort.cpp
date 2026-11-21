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
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int ans = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= q)
            {
                count++;
                if (count >= k)
                {
                    ans += (count - k + 1);
                }
            }
            else
            {
                count = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}