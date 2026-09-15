#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int r, b, g;
        cin >> r >> b >> g;
        if (r == 1 && b == 1 && g == 1)
        {
            cout << 10 << endl;
        }
        else if (r == 0 && b > 0 && g > 0)
        {
            cout << (b + g) * 3 << endl;
        }
        else if (r > 0 && b == 0 && g > 0)
        {
            cout << (r + g) * 3 << endl;
        }
        else if (r > 0 && b > 0 && g == 0)
        {
            cout << (b + r) * 3 << endl;
        }
        else
        {
            int num = min({r, b, g});
            int ans = num * 10;
            int ans2 = ((r-num) + (b-num) + (g-num)) * 3;
            cout << ans + ans2 << endl;
        }
    }

    return 0;
}