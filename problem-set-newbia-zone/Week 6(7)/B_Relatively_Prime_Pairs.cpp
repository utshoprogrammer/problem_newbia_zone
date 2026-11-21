#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int l, r;
    cin >> l >> r;

    if ((r - l + 1) % 2 != 0)
    {
        cout << "NO" << '\n';
    }
    else
    {
        cout << "YES" << '\n';
        for (ll int i = l; i < r; i += 2)
        {
            cout << i << " " << i + 1 << '\n';
        }
    }

    return 0;
}