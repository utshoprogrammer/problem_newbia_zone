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
        int n, k;
        cin >> n >> k;
        if (k == 0)
        {
            if (n % 4 == 0)
            {
                cout << "Off\n";
            }
            else{
                cout <<"On\n";
            }
        }
        else{
            if(n%4 == 0)
            {
                cout <<"On\n";
            }
            else{
                cout <<"Ambiguous\n";
            }
        }
    }

    return 0;
}