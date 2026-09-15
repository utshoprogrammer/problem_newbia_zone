#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        string s; cin >>s;

        int count = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i] == s[i-1])
            {
                count+=2;
            }
        }
        if(count <= k)
        {
            cout <<"Yes" << endl;
        }
        else{
            cout <<"No" << endl;
        }
    }
    
    

    return 0;
}