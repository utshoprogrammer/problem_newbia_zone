#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        string str;
        cin >> s;
        cin >> str;

        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'R' && str[i] == 'R')
            {
                continue;
            }
            else if((s[i] == 'G' || s[i] == 'B') && (str[i] == 'G' || str[i] == 'B'))
            {
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}