#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }   
    int l = 0, r = n-1;
    long long int sum1 = v[l],sum2 = 0,sum3 = v[r],ans = 0;
    while (l < r)
    {
        if(sum1 < sum3)
        {
            l++;
            sum1 += v[l];
        }
        else if(sum1 > sum3)
        {
            r--;
            sum3 += v[r];
        }
        else
        {
            ans = max(sum1,ans);
            l++,r--;
            sum1 += v[l];
            sum3 += v[r];
        }
    }
    cout << ans << endl;

    return 0;
}