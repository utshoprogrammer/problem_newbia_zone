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
        // int count_z = 0,count_o = 0;
        // for (int i = 0; i < s.size(); i++)
        // {
        //     if(s[i] == '0') count_z++;
        //     else count_o++;
        // }
        // if(count_z == k)
        // {
        //     cout << count_o + k << endl;
        // }
        // else if(count_z < k)
        // {
        //     cout << count_o + (k - count_z) << endl;
        // }
        // else{
        //     cout << count_o + k << endl;
        // }
        //sort(s.begin(),s.end());
        
        
        int ans = 1;
        int zero = 0, one = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
            {
                zero++;
            }
            else one++;

            if(zero == one)
            {
                ans *=2;
            }
        }
        cout << ans << endl;
    }

    return 0;
}