#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        map<int,vector<int>> mp;
        int n; cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int x; cin >> x;
            mp[x].push_back(i);
        }
        int ans = 0;
        for (auto [x,y] : mp)
        {
            if(y.size() == 1)
            {
                ans = y.front();
                break;
            }   
        }    
        cout << ans << endl;
    }  

    return 0;
}