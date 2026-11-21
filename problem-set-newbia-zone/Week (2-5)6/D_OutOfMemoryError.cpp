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
        long long int n, m, h;
        cin >> n >> m >> h;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> a = v;
        vector<int> b;
        
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;

            v[x - 1] += y;
            if (v[x - 1] > h)
            {
                b.push_back(x - 1);
                for (auto val : b)
                {
                    v[val] = a[val];
                }
                b.clear();
            }
            else
            {
                b.push_back(x - 1);
            }
        }
        for (auto value : v)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}