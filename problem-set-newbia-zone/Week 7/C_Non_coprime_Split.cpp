#include <bits/stdc++.h>
using namespace std;
#define ll long long

// int gcd(int a, int b)
// {
//     return __gcd(a, b); // log(min(a,b))
// }
// int lcm(int a, int b)
// {
//     // return (a*b)/__gcd(a,b);     // log(min(a,b))
//     return ((a / __gcd(a, b)) * b);
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--)
    {
        ll int l, r;
        cin >> l >> r;
        if (r <= 3)
        {
            cout << -1 << '\n';
        }
        else if (l != r)
        {
            if (r % 2)
            {
                cout << (r - 1) / 2 << " " << (r - 1) / 2 << "\n";
            }
            else
            {
                cout << r / 2 << " " << r / 2 << "\n";
            }
        }
        else
        {
            bool flag = true;
            for (int i = 2; i * i <= r; i++)
            {
                if (r % i == 0)
                {
                    cout << i << " " << r - i << "\n";
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << -1 << "\n";
            }
        }
    }

    return 0;
}