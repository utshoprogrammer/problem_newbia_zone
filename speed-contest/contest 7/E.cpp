#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define input(x)      \
    for (auto &i : x) \
    cin >> i
#define output(x)     \
    for (auto &i : x) \
    cout << i << " "
#define yes() cout << "YES\n"
#define no() cout << "NO\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        // int f[26] = {};
        // for (int i = 0; i < n / 2; i++)
        //     f[s[i] - 'a']++;
        // for (int i = (n + 1) / 2; i < n; i++)
        //     f[s[i] - 'a']--;
        // bool ok = true;
        // for (int c : f)
        //     if (c)
        //         ok = false;
        // cout << (ok ? "YES\n" : "NO\n");

        if(n % 2 == 1)
        {
            string a = s.substr(0,(n/2));
            string b = s.substr((n/2)+1,n);
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());

            if(a == b) cout <<"YES\n";
            else cout <<"NO\n";
            //cout << a << " "<< b <<endl;
        }
        else
        {
            string a = s.substr(0,(n/2));
            string b = s.substr(n/2,n);
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());

            if(a == b) cout <<"YES\n";
            else cout <<"NO\n";
             //cout << a << " "<< b <<endl;
        }
    }

    return 0;
}