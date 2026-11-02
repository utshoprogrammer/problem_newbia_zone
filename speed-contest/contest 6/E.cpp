#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        for (int i = n; i >= 1; i--)
        {
            for (int j =  1; j <= n; j++)
            {
                if(__gcd(j,n) == i)
                {
                    cout << j << " ";
                }
            }
        }
        cout  << endl;
    }

    return 0;
}