#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        
        int l = -1,r = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'A')
            {
                l = i;
                break;
            }
        }
        for (int i = s.size()-1; i >= 0; i--)
        {
            if(s[i] == 'B')
            {
                r = i;
                break;
            }
        }  
        if(l > r || l == -1 || r == -1) cout << 0 << endl;
        else cout << r-l << endl;
    }
    return 0;
}

// or

// #include<bits/stdc++.h>
// using namespace std;
// # define ll long long
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll int t; cin >> t;
//     while (t--)
//     {
//         int n; cin >> n;
//         string s; cin >> s;
        
//         int l = s.find('A');
//         int  r = s.rfind('B');

//         if(l > r || l == -1 || r == -1) cout << 0 << endl;
//         else cout << r-l << endl;
//     }

//     return 0;
// }