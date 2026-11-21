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
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            a.push_back({x, y});
        }
        sort(a.begin(), a.end());

        vector<int> v;
        for (int i = 0; i < n; i++)
        {                                                                                              
            v.push_back(a[i].second);
        }
        long long int count = 0;
        pbds<int> p;
        for (int i = 0; i < n; i++)
        {
            count += p.size() - p.order_of_key(v[i] + 1);
            p.insert(v[i]);
        }

        cout << count << endl;
    }

    return 0;
}