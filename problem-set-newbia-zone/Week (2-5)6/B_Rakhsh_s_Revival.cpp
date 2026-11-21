#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n,m,k; cin >> n >> m >> k;
        string s; cin >> s;

        int count = 0,ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                count++;
            }
            else count = 0;
            if(count == m)
            {
                ans++;
                for (int j = i; j < min(i+k,n); j++)
                {
                    s[j] = '1';
                }
                count = 0;
            }
        }
        cout << ans << endl;
        
    }

    return 0;
}