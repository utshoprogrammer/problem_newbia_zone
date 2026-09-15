#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;

    int time = (t + 0.5) / a;

    int total = b * time;
    cout << total << endl;
    return 0;
}