#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<long long int> l(n);
        pbds<int> p;
        for (int i = 0; i < n; i++)
        {
            l[i] = i - p.order_of_key(v[i]);
            p.insert(v[i]);
        }

        long long int ans = 0;
        pbds<int> ps;
        for (int i = n - 1; i >= 0; i--)
        {
            long long int r = ps.order_of_key(v[i]);
            ans += l[i] * r;
            ps.insert(v[i]);
        }
        cout << ans << endl;
    }

    return 0;
}