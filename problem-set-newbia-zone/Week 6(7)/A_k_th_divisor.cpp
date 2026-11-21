#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int n, k;
    cin >> n >> k;
    set<ll int> s;
    for (ll int i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            s.insert(i);
            ll int a = n / i;
            s.insert(a);
        }
    }
    vector<ll int> ans;
    for (auto val : s)
    {
        ans.push_back(val);
    }

    if (k < 0 ||  ans.size() < k)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << ans[k -1] << endl;
    }

    return 0;
}

// or

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll int n, k;
//     cin >> n >> k;
//     vector<ll int> ans;
//     for (ll int i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             ans.push_back(i);
//             if ((n / i) != i)
//             {
//                 ans.push_back(n / i);
//             }
//         }
//     }
//     sort(ans.begin(), ans.end());
//     if (ans.size() < k)
//     {
//         cout << -1 << '\n';
//     }
//     else
//     {
//         cout << ans[k - 1] << '\n';
//     }

//     return 0;
// }