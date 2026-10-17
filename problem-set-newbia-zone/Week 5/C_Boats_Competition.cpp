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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int s = 2; s <= 2*n; s++)
        {
            int count = 0;
            int l = 0, r = n - 1;
            while (l < r)
            {
                int sum = v[l]+v[r];
                if (s == sum)
                {
                    count++;
                    l++,r--;
                }
                else if (sum < s)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
            ans = max(ans,count);
        }

        cout << ans << '\n';
    }

    return 0;
}