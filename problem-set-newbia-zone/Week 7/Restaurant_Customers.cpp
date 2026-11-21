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
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int,int> d;
        for (int i = 1; i <= n; i++)
        {
            int a,b; cin >> a >> b;
            d[a]++,d[b+1]--;
        }
        int ans = 0;
        int cur = 0;
        for(auto [key,val] : d)
        {
            cur += val;
            ans = max(ans,cur);
        }
       cout << ans << endl;
    }

    return 0;
}