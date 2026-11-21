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
        string s,t; cin >> s >> t;

        int count = 0;
        for (int i = 1; i < n-1; i++)
        {
            if(s[i-1] == '.' && s[i+1] == '.' && s[i] == '.' && t[i] == '.' && t[i+1] == 'x' && t[i-1] == 'x')
            {
                count++;
            }
            if(t[i-1] == '.' && t[i+1] == '.' && t[i] == '.' && s[i] == '.' && s[i+1] == 'x' && s[i-1] == 'x')
            {
                count++;
            }
        }
        cout << count << endl;
        
    }

    return 0;
}