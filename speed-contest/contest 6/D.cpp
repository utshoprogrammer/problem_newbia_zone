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
        string s; cin >> s;
        int alice = 0,bob = 0;
        for (int i = 0; i < n; i++)
        {
            if((s[i] == '0' && s[i+1] == '1'))
            {
                alice++;
            }
            else if((s[i] == '1' && s[i+1] == '0'))
            {
                bob++;
            }
        }
        if(alice == 0 ||  bob ==0 )
        {
            cout << "Bob\n";
        }
        else{
            cout << "Alice\n";
        }
        
    }

    return 0;
}