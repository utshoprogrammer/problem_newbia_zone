#include<bits/stdc++.h>
using namespace std;

# define ll long long
#define pii pair<int,int>
#define pll pair<long long,long long>
#define input(x) for(auto &i:x) cin>>i
#define output(x) for(auto &i:x) cout<<i<<" "
#define yes() cout << "YES\n"
#define no() cout << "NO\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t = 1;
    cin >> t;
    while (t--)
    {
             ll maxT,maxN,maxS;
             cin >> maxT >> maxN >> maxS;

             ll int k = min(maxT,maxS/maxN);
             ll int ans = k * maxN * maxN;

             if(k < maxT)
             {
                ll int rem = maxS - k * maxN;
                ans += rem * rem;
             }
             cout << ans << endl;
    }

    return 0;
}