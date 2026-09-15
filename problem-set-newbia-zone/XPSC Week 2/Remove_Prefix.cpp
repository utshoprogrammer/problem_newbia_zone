// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t; cin >> t;
//     while (t--)
//     {
//         int n; cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         set<int> s;

//         int ans = 0;
//         for (int i = v.size()-1; i >= 0; i--)
//         {
//             auto it = s.find(v[i]);

//             if(it == s.end())
//             {
//                 s.insert(v[i]);
//             }
//             else{
//                 ans = max(ans,i+1);
//             }
//         }
//         cout << ans << endl;
        
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >>t;
    while (t--)
    {
        int n; cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<int,int> mp;

        int ans = 0;
        for (int i = v.size()-1; i >= 0; i--)
        {
            auto it = mp.find(v[i]);

            if(it == mp.end())
            {
                mp[v[i]];
            }
            else{
                ans = max(ans,i+1);
            }
        }  
        cout << ans << endl;   
    }

    return 0;
}