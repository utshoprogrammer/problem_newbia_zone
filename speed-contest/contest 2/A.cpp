#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r,b; cin >> r >> b;

    int total_t = min(r,b);

    int ex_r = (r - total_t)*1;
    int ex_b = (b - total_t)*2;

    int total_count = ex_b + ex_r +(total_t*5);
    cout << total_count << endl;

    return 0;
}