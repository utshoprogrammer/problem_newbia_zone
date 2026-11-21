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
             vector<int> v(n);
             for (int i = 0; i < n; i++)
             {
                cin >> v[i];
             }
             int p = v[0];
             int i = 0;
             while(i < n && v[i] == p)
             {
                i++;
             }
             bool ok = true;
             for(;i < n;i++)
             {
                if(v[i] != -p)
                {
                    ok = false;
                    break;
                }
             }
             cout <<( ok ? "Yes\n" : "No\n");
     }
    return 0;
}

// pass all testcase but not currect asnwer

// #include<bits/stdc++.h>
// using namespace std;
// # define ll long long
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     long long int t; cin >> t;
//     while (t--)
//     {
//          int n; cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         bool equal = true;
//         for (int i = 0; i < n; i++)
//         {
//             for(int j = i+1;j < n;j++)
//             {
//                 if(v[i] == v[j]) continue;
//                 if(v[i]+v[j] != 0){
//                     equal = false;
//                     break;
//                 }
//             }
//         }
//         if(equal) cout <<"Yes\n";
//         else cout <<"No\n";      
//     }
//     return 0;
// }