#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    map<int,int> mp;

    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp[x]++;

        mx = max(mx,mp[x]);
    }
    cout << mx << endl;

    return 0;
}