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
        int num;
        cin >> num;
        vector<int> v;
        for (int i = 0; i < num; i++)
        {
            int x;
            cin >> x;
            if (v.size() < 2 || v.back() != x || v[v.size() - 2] != x)
            {
                v.push_back(x);
            }
        }
        bool flag = false;

        if (v.size() == 1 || v.size() == 2 && v[0] == v[1])
        {
            flag = true;
        }
        int n = v.size();
        int ans = v.size();
        bool f1 = false, f2 = false;

        for (int i = 0; i < n; i++)
        {
            if (i > 0 && v[i] == v[i - 1])
            {
                ans--;
            }
            if (i > 2 && v[i] == v[i - 1] && v[i - 2] == v[i - 3])
            {
                f2 = true;
            }
            if (i > 2 && v[i] == v[i - 1] && v[i] != v[i - 3])
            {
                f1 = true;
            }
            if (i + 3 < n && v[i] == v[i + 1] && v[i] != v[i + 3])
            {
                f1 = true;
            }
            if (i == 2 && v[i] == v[i - 1])
            {
                f1 = true;
            }
            if (i + 2 == n - 1 && v[i] == v[i + 1])
            {
                f1 = true;
            }
        }
        if (f2)
        {
            ans+=2;
        }
        else if (f1)
        {
            ans += 1;
        }
        if (flag)
        {
            cout << 1 << endl;
        }
        else
            cout << ans << endl;
    }

    return 0;
}