#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        string p,s; cin >> p >> s;

        int l = 0, r = 0,flag = 1;

        while(l < p.size() && r < s.size())
        {
            int count1 = 0;
            char c = p[l];
            while(l < p.size() && p[l] == c)
            {
                count1++;
                l++;
            }
            int count2 = 0;
            while(r < s.size() && s[r] == c)
            {
                count2++;
                r++;
            }
            if(count1 > count2 || count2 > count1*2)
            {
                flag = 0;
                break;
            }
        }
        if(l != p.size() || r != s.size())
        {
            flag = 0;
        }

        if(flag == 0) cout << "NO" << endl;
        else cout <<"YES" << endl;
    }

    return 0; 
}