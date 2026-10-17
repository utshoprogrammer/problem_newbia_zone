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
        string s;
        cin >> s;

        int ans = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                ans++;
            }
        }
        int remove_val = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] != s[i - 1] && s[i] != s[i + 1])
            {
                if (s[i + 1] == s[i - 1])
                {
                    remove_val = 2;
                    break;
                }
                else
                    remove_val = 1;
            }
        }
        ans -= remove_val;
        cout << ans << endl;
    }

    return 0;
}