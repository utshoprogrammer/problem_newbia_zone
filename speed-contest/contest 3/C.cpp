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
        long long int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int last_one = -1;
        long long int one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
                last_one = i;
            }
        }

        if (last_one == -1)
        {
            cout << 0 << endl;
            continue;
        }
        long long int zero = 0;
        for (int i = 0; i < last_one; i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
        }
        cout << one + min(k, zero) << endl;
    }

    return 0;
}