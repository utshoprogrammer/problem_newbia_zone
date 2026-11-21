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
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        int l = 0, r = n - 1;
        int x = 1;
        while (l <= r)
        {
            if (x % 2 == 0)
            {
                if (p[l] < p[r])
                {
                    cout << "R";
                    r--;
                }
                else
                {
                    cout << "L";
                    l++;
                }
                x = 1;
            }
            else
            {
                if (p[l] < p[r])
                {
                    cout << "L";
                    l++;
                }
                else{
                    cout << "R";
                    r--;
                }
                x = 2;
            }
        }
        cout << endl;      
    }
    return 0;
}

// or

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long int t; cin >> t;
//     while (t--)
//     {
//         int n; cin >> n;
//         vector<int> p(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> p[i];
//         }
//         string ans = "";
//         int l = 0,r = n-1;

//        for (int i = 0; i < n; i++)
//         {
//             bool flag;
//             if(i % 2 == 0)
//             {
//                 flag = p[l] < p[r];
//             }
//             else{
//                 flag = p[l] > p[r];
//             }
//             if(flag)
//             {
//                 ans += 'L';
//                 l++;
//             }
//             else{
//                 ans += 'R';
//                 r--;
//             }
//         }
//         cout << ans << endl;
        
//     }

//     return 0;
// }