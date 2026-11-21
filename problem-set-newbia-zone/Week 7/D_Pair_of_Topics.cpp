#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
    }
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
      ans[i] = a[i] - b[i];
    }
    sort(ans.begin(), ans.end());

    int i = 0, j = n - 1;
    ll int sum = 0;

    while (i < j)
    {
      if (ans[i] + ans[j] > 0)
      {
        sum += j - i;
        j--;
      }
      else
        i++;
    }
    cout << sum << endl;
  }

  return 0;
}