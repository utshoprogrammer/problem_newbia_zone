// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int n, m;
//         cin >> n >> m;
//         long long int sum = n;

//         if (m >= n && m <= n * 3 && (m - n) % 2 == 0)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }

// or

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        long long int n,m; cin >> n >> m;

        if(n > m)
        {
            cout <<"NO" << endl;
        }
    }



    return 0;
}