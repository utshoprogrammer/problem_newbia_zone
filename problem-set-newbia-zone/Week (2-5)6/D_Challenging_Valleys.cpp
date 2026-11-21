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
//         int n;
//         cin >> n;
//         vector<int> v;
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             if (v.empty() || v.back() != x)
//             {
//                 v.push_back(x);
//             }
//         }
//         int m = v.size();
//         int count = 0;
//         for (int i = 0; i < m; i++)
//         {
//             bool x = (i == 0) || (v[i - 1] > v[i]);
//             bool y = (i == m - 1) || v[i + 1] > v[i];

//             if (x && y)
//             {
//                 count++;
//             }
//         }
//         if(count == 1) cout << "YES" << endl;
//         else cout <<"NO" << endl;
//     }
//     return 0;
// }

// or 

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
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (v.empty() || v.back() != x)
            {
                v.push_back(x);
            }
        }
        int m = v.size();
        int count = 0;
        
        for (int i = 0; i < m; i++)
        {
            if(((i == 0) || (v[i - 1] > v[i])) && ((i == m - 1) || v[i + 1] > v[i]))
            {
                count++;
            }
        }
        if(count == 1) cout << "YES" << endl;
        else cout <<"NO" << endl;
    }
    return 0;
}