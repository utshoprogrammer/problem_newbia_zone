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
             int n; cin >> n;
             vector<int> v(n+1);
             for (int i = 1; i <= n; i++)
             {
                cin >> v[i];
             }

             int mn = INT_MAX;
             int indx = -1;
             for (int i = 1; i <= n; i++)
             {
                if(mn > v[i])
                {
                    mn = v[i];
                    indx = i;
                }
             }
             cout << indx << endl;           
    }

    return 0;
}
// or...
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
//         int n;
//         cin >> n;
//         vector<ll int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         vector<ll int> pre(n + 1);
//         pre[0] = v[0];
//         for (int i = 1; i < n; i++)
//         {
//             pre[i] = pre[i - 1] + v[i];
//         }
//         vector<ll int> suf(n + 1);
//         suf[n - 1] = v[n - 1];
//         for (int i = n - 2; i >= 0; i--)
//         {
//             suf[i] = suf[i + 1] + v[i];
//         }
//         vector<ll int> a;
//         for (int i = 0; i < n; i++)
//         {
//             a.push_back(suf[i] + pre[i]);
//         }
//         map<ll int, int> mp;
//         for (int i = 0; i < n; i++)
//         {
//             mp[a[i]] = i;
//         }
//         ll int ans = 0;
//         ll int mn = LLONG_MAX;
//         for (int i = 0; i < n; i++)
//         {
//             if (mn > a[i])
//             {
//                 mn = a[i];
//                 ans = i + 1;
//             }
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }