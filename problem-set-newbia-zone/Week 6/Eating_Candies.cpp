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
        for(int i = 0;i < n;i++)
        {
            cin >> v[i];
        }
        int ans = 0,sum1 = 0,sum2 = 0;
        int l = 0,r = n-1;
        while(l <= r)
        {
            if(sum1 > sum2)
            {
                sum2 += v[r];
                r--;
            }
            else
            {
                sum1 += v[l];
                l++;
            }
            if(sum1 == sum2)
            {
                ans = l+(n-r-1);
            }
        }
        cout << ans << endl;
    }

    return 0;
}