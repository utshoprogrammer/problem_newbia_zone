#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<string> v;
    map<string,bool> mp;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    for (int i = v.size()-1; i >= 0; i--)
    {
        auto it = mp.find(v[i]);
        if(it == mp.end())
        {
            cout << v[i] << endl;
            mp[v[i]];
        }
    }
    
    return 0;
}