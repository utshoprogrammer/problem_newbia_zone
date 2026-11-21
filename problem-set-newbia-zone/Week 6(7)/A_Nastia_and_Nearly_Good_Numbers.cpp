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
        ll int a, b;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO\n";
        }
        else if (b == 2)
        {
            cout << "YES\n";
            cout << a << " " << 3 * a << " " << 4 * a << '\n';
        }
        else
        {
            cout << "YES\n";
            cout << a << " " << a * (b - 1) << " " << a * b << '\n';
        }
    }

    return 0;
}