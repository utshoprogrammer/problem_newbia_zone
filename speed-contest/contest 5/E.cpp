#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n,m; cin >> n >> m;
       for(int i = 0;i < n;i++)
        {
            string s; cin >> s;
            int fre[128] = {0};
            for(int i = 0;i < s.size();i++)
            {
                //char  val = s[i];
                fre[s[i]]++;
            }
            int ans = 0;
            for(int i = 65;i < 123;i++)
            {
                    if(fre[i]%2 == 0)
                    {
                        ans = fre[i];
                    }
            }
            cout << ans << endl;
        }
    //     map<char,int> count;
        
    //     for(int i = 0;i < s.size();i++)
    //     {
    //         count[s[i]]++;
    //     }
    //     for(int i = 0;i < t.size();i++)
    //     {
    //         count[t[i]]++;
    //     }
    //     for(auto [val,cont] : count)
    //     {
    //         cout << val <<" " << cont << endl ;
    //     }
    //    cout << endl;
    }

    return 0;
}