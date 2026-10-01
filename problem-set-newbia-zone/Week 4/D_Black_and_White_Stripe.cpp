#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        string s; cin >> s;

        int len = s.size();

        int l = 0,r = 0;
        int cout_w = 0;
        int ans = INT_MAX;

        while (r < len)
        {
            if(s[r] == 'W')
            {
                cout_w++;
            }
            if(r-l+1 == k)
            {
                ans = min(ans,cout_w);
                if(s[l] == 'W')
                {
                    cout_w -= 1;
                }
                l++,r++;
            }
            else{
                r++;
            }
        }
        cout << ans << endl;       
    }
    
    return 0;
}