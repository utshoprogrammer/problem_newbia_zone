#include<bits/stdc++.h>
using namespace std;

# define ll long long
#define pii pair<int,int>
#define pll pair<long long,long long>
#define input(x) for(auto &i:x) cin>>i
#define output(x) for(auto &i:x) cout<<i<<" "
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
             int n; cin >> n;
             string s; cin >> s;

             int one = 0,zero = 0,count = 0;
             for (int i = 0; i < n; i++)
             {
                if(s[i] == '1')
                {
                    one++;
                }
                else{
                    zero++;
                }
                if(zero == one)
                {
                    count++;
                }
             }
             
             cout << (1LL << count) << endl;
    }

    return 0;
}