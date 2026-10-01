#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, x;
    cin >> n >> x;

    vector<long long int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >>v[i];
    }
    int flag = 0;
    map<long long int,int> mp;
    for (int i = 1; i <= n; i++)
    {
        long long int find_val = x - v[i];

        auto it = mp.find(find_val);
        if(it != mp.end())
        {
            cout << it->second <<" " << i << endl;
            flag = 1;
            break;
        }
        mp[v[i]] = i;
    }
    if(flag == 0)
    {
        cout << "IMPOSSIBLE" << endl;
    }  
    
    return 0;
}