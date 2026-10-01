#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int x = v[0];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(x <= v[i])
            {
                ans++;
            }
        }
        
        cout << ans << endl;
    }
    

    return 0;
}