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
        int n;
        cin >> n;
        vector<int> p(n + 1), a(n);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            p[x] = i;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (p[a[i - 1]] > p[a[i]])
            {
                flag = false;
            }
        }
        if (flag )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}