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
             int a,b,c; cin >> a >> b >> c;

             ll int ans = 0;
             if(c/b >= a)
             {
                 ans = a*b*b;
             }
             else{
                ans = (c/b)*b*b;
                ll int k = (c%b);
                ans += k*k;
             }
             cout << ans << endl;
    }

    return 0;
}

// or
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define input(x)      \
//     for (auto &i : x) \
//     cin >> i
// #define output(x)     \
//     for (auto &i : x) \
//     cout << i << " "
// #define yes() cout << "YES\n"
// #define no() cout << "NO\n"
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define endl "\n"

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         int ts, n, sum;
//         cin >> ts >> n >> sum;

//         ll int x = min(ts, sum / n);
//         ll int y = sum - (x * n);

//         ll int res = x * n * n;

//         if (x < ts && y > 0)
//             res += (y * y);

//         cout << res << endl;
//     }

//     return 0;
// }