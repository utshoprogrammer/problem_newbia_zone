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

        if (n == 1)
            cout << 1 << endl;
        else if (n % 2 == 1)
            cout << n / 2 << endl;
        else
            cout << n / 2 + 1 << endl;;
    }

    return 0;
}