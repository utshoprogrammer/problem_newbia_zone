#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n,k; cin >> n >> k;

    long long int ans = (n-k)*10000;
    cout << ans << endl;

    return 0;
}