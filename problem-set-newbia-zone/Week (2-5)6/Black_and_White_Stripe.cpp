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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int l = 0,r = 0,ans = INT_MAX;
        int count_w = 0;
        while (r < s.size())
        {
                if(s[r] == 'W')
                {
                   count_w++;
                }  
                if(r-l+1 == k)
                {
                    ans = min(ans,count_w);
                    if(s[l] == 'W')
                    {
                        count_w --;
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