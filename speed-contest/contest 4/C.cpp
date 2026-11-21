#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int b,c; cin >> b >> c;
        int ans = c/__gcd(b,c);
        cout << ans << endl;
    }
    
    return 0;
}