#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n * 2 <= m)
    {
        cout << n << endl;
    }
    else if(n == m)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << n * 2 - m << endl;
    }
    return 0;
}