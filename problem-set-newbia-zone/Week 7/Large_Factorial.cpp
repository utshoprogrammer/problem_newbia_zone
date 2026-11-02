#include<bits/stdc++.h>
using namespace std;
# define ll long long

const int mod = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        ll  int n; cin >> n;
        ll int factorial = 1;
        for (ll int i = 1; i <=  n; i++)
        {
            factorial =  (1LL * factorial % mod * i % mod) % mod;
        }
        cout << factorial << endl;
    }

    return 0;
}