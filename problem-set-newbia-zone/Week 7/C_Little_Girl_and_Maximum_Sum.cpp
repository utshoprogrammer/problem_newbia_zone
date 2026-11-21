#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define input(x)    \
  for (auto &i : x) \
  cin >> i
#define output(x)   \
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
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1), d(n + 2);
    for (int i = 1; i <= n; i++)
    {
      cin >> v[i];
    }
    for (int i = 1; i <= q; i++)
    {
      int l, r;
      cin >> l >> r;
      d[l]++, d[r + 1]--;
    }
    ll int ans = 0;
    for (int i = 1; i <= n; i++)
    {
      d[i] = d[i - 1] + d[i];
    }
    sort(v.rbegin(), v.rend());
    sort(d.rbegin(), d.rend());

    for (int i = 0; i <= n; i++)
    {
      ans += (1LL * v[i] * d[i]);
    }
    cout << ans << endl;
  }

  return 0;
}