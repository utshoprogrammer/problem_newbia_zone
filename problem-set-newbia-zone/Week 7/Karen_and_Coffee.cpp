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
   //cin >> t;
   while (t--)
   {
      int n, k, q;
      cin >> n >> k >> q;
      vector<int> d(200005, 0), ans(200005, 0);
      for (int i = 1; i <= n; i++)
      {
         int x, y;
         cin >> x >> y;
         d[x]++;
         d[y + 1]--;
      }

      for (int i = 1; i < d.size(); i++)
      {
         d[i] = d[i - 1] + d[i];
      }

      for (int i = 1; i < d.size(); i++)
      {
         if (d[i] >= k)
         {
            ans[i] = ans[i-1] + 1;
         }
         else ans[i] = ans[i-1];
      }

      for (int i = 1; i <= q; i++)
      {
         int a, b;
         cin >> a >> b;
         cout << ans[b] - ans[a-1] << endl;
      }
   }

   return 0;
}