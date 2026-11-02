#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int count = 0,ans = 0;
        int temp_l = 0,l = 0, r = 0;
        
        for (int i = 0; i < n; i++)
        {
            if(mp[v[i]] == 1)
            {
                count++;
                if(count == 1) temp_l = i + 1;
                if(count > ans)
                {
                    ans = count;
                    l = temp_l;
                    r = i + 1;
                }
            }
            else{
                count = 0;
            }
        }
        if(ans == 0) cout << 0 << endl;
        else cout << l <<" " << r << endl;
         
    }

    return 0;
}