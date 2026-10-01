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
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<long long int> pre(n+1);
        pre[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i-1] + v[i];
        }

        string s;
        cin >> s;

        long long int ans = 0;
        int l = 0,r = n-1;
        while (l < r)  
        {
           if(s[l] == 'L' && s[r] == 'R' )
           {
                // long long int sum = 0;
                // for (int i = l; i <= r; i++)
                // {
                //     sum +=v[i];
                // }
                // ans += sum;
                if(l == 0)
                    ans += pre[r];
                else{
                    ans += (pre[r] - pre[l-1]);
                }
                l++;
                r--;
           }
           else if(s[l] != 'L')
           {
                l++;
           }
           else if(s[r] != 'R')
           {
                r--;
           }

        }
        cout << ans << endl;
        
    }

    return 0;
}