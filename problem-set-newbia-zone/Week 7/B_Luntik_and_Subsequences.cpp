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
             ll int count1 = 0,count0 = 0;
             for(int i= 0;i < n;i++)
             {
                int x; cin >> x;
                if(x == 1)
                {
                    count1++;
                }
                else if(x == 0)
                {
                    count0++;
                }
             }
             cout << count1 * (1LL << count0) << endl;
            //  cout << (count1 * pow(2, count0)) << endl;
    }

    return 0;
}