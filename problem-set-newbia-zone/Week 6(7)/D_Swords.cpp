#include<bits/stdc++.h>
using namespace std;
# define ll long long

int gcd(int a, int b)
{
    return __gcd(a, b); // log(min(a,b))
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll int mx = *max_element(v.begin(),v.end());

    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        a.push_back(mx - v[i]);
    }
    int z = 0;
    for (int i = 0; i < a.size(); i++)
    {
        z = gcd(z,a[i]);
    }

    ll int total = accumulate(a.begin(),a.end(),0LL);

    ll int y = total / z;

    cout << y <<" " << z << '\n';

    return 0;
}