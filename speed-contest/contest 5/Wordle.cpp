#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        string s,t; cin >> s >> t;
        string  m  = "";
        for (int i = 0; i < s.size(); i++)
        {
             if(s[i] == t[i])
             {
                m += 'G';
             }
             else{
                m += 'B';
             }
        }
        cout << m << endl;
    }

    return 0;
}