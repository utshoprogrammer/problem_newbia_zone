#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    int count = 0;
    set <pair<string,string>> leavse;
    
    for (int i = 0; i < t; i++)
    {
        string a, b;
        cin >> a >> b;
        leavse.insert({a,b});
    }
    cout << leavse.size() << endl;
 
    return 0;
}
