#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, k;
    cin >> n >> k;
    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long int ans = 0, l = 0, r = 0;
    multiset<long long int> ms;
    while (r < n)
    {
        ms.insert(v[r]);
        long long int mn = *ms.begin(), mx = *ms.rbegin();
        if (mx - mn <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l <= r)
            {
                mn = *ms.begin(), mx = *ms.rbegin();
                if (mx - mn <= k)
                {
                    break;
                }
                ms.erase(ms.find(v[l]));
                l++;
            }
            mn = *ms.begin(), mx = *ms.rbegin();
            if (mx - mn <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}