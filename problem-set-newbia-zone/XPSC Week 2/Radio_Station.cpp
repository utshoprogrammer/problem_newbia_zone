#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;

    map<string,string> mp;
    for (int i = 0; i < n; i++)
    {
        string a,b; cin >> a >> b;
        string s = b + ";";
        mp[s] = a;
    }

    for (int i = 0; i < m; i++)
    {
        string a,b; cin >> a >> b;

        auto it = mp.find(b);

        cout << a << " " << b << " " <<"#" << it->second << endl;
        
    }
    
    return 0;
}