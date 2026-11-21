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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> ans(n);
        int big = n, small = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                ans[i] = big;
                big--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ans[i] = small;
                small++;
            }
        }
        int l = 0, r = 0, count_one = 0;
        bool flag = true;

        while (r < n)
        {
            if (r - l + 1 == k)
            {
                if (s[r] == '1')
                {
                    count_one++;
                }
                if (count_one >= k)
                {
                    flag = false;
                    break;
                }
                if (s[l] == '1')
                {
                    count_one--;
                }
                l++, r++;
            }
            else
            {
                if (s[r] == '1')
                {
                    count_one++;
                }
                r++;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
            for (auto val : ans)
            {
                cout << val << " ";
            }
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}