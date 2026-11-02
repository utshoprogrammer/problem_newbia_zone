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
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> a(n);
        vector<int> b(m);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        vector<int> ans;
        bool flag = 1;

        int cur = k;
        int l = 0, r = 0;

        while (l < n && r < m)
        {
            if (a[l] == 0)
            {
                ans.push_back(0);
                cur++;
                l++;
            }
            else if (b[r] == 0)
            {
                ans.push_back(0);
                cur++;
                r++;
            }
            else if (a[l] <= cur || b[r] <= cur)
            {
                if (b[r] <= cur)
                {
                    ans.push_back(b[r]);
                    r++;
                }
                else
                {
                    ans.push_back(a[l]);
                    l++;
                }
            }
            // else if (a[l] > cur && b[r] > cur)
            // {
            //     flag = 0;
            //     break;
            // }
            else
            {
                flag = 0;
                break;
            }
        }
        while (l != n)
        {
            if (a[l] == 0)
            {
                ans.push_back(a[l]);
                cur++;
                l++;
            }
            else if (a[l] <= cur)
            {
                ans.push_back(a[l]);
                l++;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        while (r != m)
        {
            if (b[r] == 0)
            {
                ans.push_back(0);
                cur++;
                r++;
            }
            else if (b[r] <= cur)
            {
                ans.push_back(b[r]);
                r++;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            cout << -1 << endl;
        else
        {
            for (auto val : ans)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    return 0;
}