#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define input(x)      \
    for (auto &i : x) \
    cin >> i
#define output(x)     \
    for (auto &i : x) \
    cout << i << " "
#define yes() cout << "YES\n"
#define no() cout << "NO\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        map<int, int> ans, mp;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] == 1)
            {
                ans[i] = ans[i - 1] + 1;
                mp[v[i]] = i;
            }
            else
            {
                ans[i] = ans[i - 1];
            }
            if (mp[v[i] - 1] > 0)
            {
                int a = mp[v[i] - 1];
                ans[i] = max(ans[i], ans[a - 1] + v[i]);
                mp[v[i]] = mp[v[i] - 1];
            }
        }
        cout << ans[n] << endl;
    }

    return 0;
}