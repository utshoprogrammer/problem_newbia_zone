#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define input(x)     \
   for (auto &i : x) \
   cin >> i
#define output(x)    \
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
      int n, m, k;
      cin >> n >> m >> k;
      vector<ll int> v(n + 2), dif(n + 2,0), cnt(m + 2, 0);
      for (int i = 1; i <= n; i++)
      {
         cin >> v[i];
      }
      vector<int> l(m + 1), r(m + 1);
      vector<ll int> d(m + 1);
      for (int i = 1; i <= m; i++)
      {
         cin >> l[i] >> r[i] >> d[i];
      }
      while (k--)
      {
         int x, y;
         cin >> x >> y;
         cnt[x]++;
         cnt[y + 1]--;
      }
      for (int i = 1; i <= m; i++)
      {
         cnt[i] += cnt[i - 1];
         long long a = cnt[i] * d[i];
         dif[l[i]] += a;
         dif[r[i] + 1] -= a;
      }
      for (int i = 1; i <= n; i++)
      {
         dif[i] += dif[i - 1];
         cout << v[i] + dif[i] << " ";
      }
      cout << endl;
   }

   return 0;
}