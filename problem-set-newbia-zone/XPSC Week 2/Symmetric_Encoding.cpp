#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        map<char,char> mp;

        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        vector<char> v1;

        for (auto it : mp)
        {
            v1.push_back(it.first);
        }

        vector<char> v2;
        v2 = v1;
        
        reverse(v2.begin(),v2.end());

        map<char,char> m;

        for (int i = 0; i < v1.size(); i++)
        {
            m[v1[i]]= v2[i];
        }
        for (int i = 0; i < s.size(); i++)
        {
            auto it = m.find(s[i]);

            cout << it->second;
        }
        cout << endl;
    
    }

    return 0;
}