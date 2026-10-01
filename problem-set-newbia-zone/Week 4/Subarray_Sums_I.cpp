#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n,x; cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = 0;
    long long int cur_sum = 0;
    
    int ans = 0;
    while (r < n)
    {
        cur_sum += v[r];

        if(cur_sum == x)
        {
            ans++;
        }
        else if(cur_sum > x)
        {
            while (cur_sum > x)
            {
                cur_sum -= v[l];
                l++;
            }  
            if(cur_sum == x)
            {
                ans++;
            }
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}