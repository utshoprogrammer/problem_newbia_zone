#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,s; cin >> n >> s;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long int ans = 0, l = 0, r = 0, sum = 0;

    while (r < n)
    {
        sum += v[r];
        while (sum >= s)
        {
            ans += n-r;
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}