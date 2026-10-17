#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a,b,c,d; cin >> a >> b >> c >> d;
        
        cout << max({a,b,c,d})<< endl;

    }

    return 0;
}