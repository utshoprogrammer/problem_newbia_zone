#include<bits/stdc++.h>
using namespace std;
# define ll long long

ll int gcd(ll int a, ll int b)
{
    return __gcd(a, b); // log(min(a,b))
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
         vector<ll int> v(n);
         for (int i = 0; i < n; i++)
         {
            cin >> v[i];
         }
         // min element indx
        int mn = min_element(v.begin(),v.end()) - v.begin();
        ll int g = 0;
        for (int i = 0; i < n; i++)
        {
            if((i != mn) && (v[i] % v[mn] == 0))
            {
                g = gcd(g,v[i]);
            }
        }
        if(g == v[mn])
        {
            cout << "Yes\n";
        }
        else{
            cout <<"No\n";
        }
         
    }

    return 0;
}