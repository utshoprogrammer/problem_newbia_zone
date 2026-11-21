#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char a[50][50];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                for (int k = 1; i + k < n && j + k < m; k++)
                {
                    if (a[i][j] == a[i][j + k] && a[i][j] == a[i + k][j] && a[i][j] == a[i + k][j + k])
                    {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}