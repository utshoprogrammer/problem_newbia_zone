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
        int n;
        cin >> n;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        int c1 = count(s1.begin(), s1.end(), '1');
        int c2 = count(s2.begin(), s2.end(), '1');
        int c3 = count(s3.begin(), s3.end(), '1');

        int sum = c1 + c2 + c3;

        if (sum % n != 0)
        {
            cout << -1 << endl;
        }
        else if (sum == 0 || sum == 3 * n)
        {
            cout << 0 << endl;
        }
        else if (sum == n)
        {
            cout << n - max({c1, c2, c3}) << endl;
        }
        else
        {
            cout << min({c1, c2, c3}) << endl;
        }
    }

    return 0;
}