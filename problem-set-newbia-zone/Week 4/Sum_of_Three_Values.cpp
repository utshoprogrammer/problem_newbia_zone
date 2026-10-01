#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, x;
    cin >> n >> x;
    vector<pair<long long int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());

    int flag = 1;

    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1, r = n - 1;

        while (l < r)
        {
            long long int cur_sum = v[i].first + v[l].first + v[r].first;
            if (cur_sum == x)
            {
                vector<long long int> ans = {v[i].second,v[l].second,v[r].second};
                sort(ans.begin(),ans.end());
                cout << ans[0] <<" "<< ans[1] <<" "<< ans[2] << endl;
                flag = 0;
                return 0;
            }
            else if (cur_sum < x)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    if (flag == 1)
        cout << "IMPOSSIBLE" << endl;

    return 0;
}