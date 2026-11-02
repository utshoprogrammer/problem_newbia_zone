#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 1; i < n; i++)
        {
            b[i] += b[i - 1];
        }
        sort(a.rbegin(), a.rend());
        long long int ans = 0;
        for (auto val : a)
        {
            long long int x = a.back();
            while (!a.empty() && a.back() < x)
            {
                a.pop_back();
            }
            long long int k = a.size();
            auto it = upper_bound(b.begin(), b.end(), k);
            ans = max(ans, x * (it - b.begin()));
            a.pop_back();
        }
        cout << ans << endl;
    }
    return 0;
}

// or

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int n;
//         cin >> n;
//         vector<long long int> a(n), b(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }
//         for (int i = 1; i < n; i++)
//         {
//             b[i] += b[i - 1];
//         }
//         sort(a.begin(), a.end());
//         long long int ans = 0;
//         for (int i = 0;i < n ;i++)
//         {
//             long long int x = n-i;
//             long long int  k = upper_bound(b.begin(), b.end(), x) - b.begin();
//             ans = max(ans, a[i] * (k));
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }