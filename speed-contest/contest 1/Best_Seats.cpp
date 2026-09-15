#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = v[0]+v[1];
        for (int i = 1; i < v.size(); i++)
        {
            ans = min(ans,(v[i-1]+v[i]));
        }
        cout << ans << endl;
        
    }
    
    return 0;
}