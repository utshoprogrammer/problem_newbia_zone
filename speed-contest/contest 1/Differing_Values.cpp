#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define input(x)      \
    for (auto &i : x) \
    cin >> i
#define output(x)     \
    for (auto &i : x) \
    cout << i << " "
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

    long long int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count_z = count(s.begin(), s.end(), '0');

        int base = 0, odd = 0;
        for (int i = 1; i <= k; i++)
        {
            int l = (n - i) / k + 1;
            base += l / 2;
            odd += l % 2;
        }
        if (count_z >= base && count_z <= (base + odd))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t; cin >> t;
//     while (t--)
//     {
//         int n,k; cin >> n >> k;
//         string s; cin >>s;

//         int count = 0;
//         for (int i = 1; i < s.size(); i++)
//         {
//             if(s[i] == s[i-1])
//             {
//                 count+=2;
//             }
//         }
//         if(count <= k)
//         {
//             cout <<"Yes" << endl;
//         }
//         else{
//             cout <<"No" << endl;
//         }
//     }
//     return 0;
// }