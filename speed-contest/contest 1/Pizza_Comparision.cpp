#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        float a,b; cin >> a >> b;
        float ans = a/100;
        float ans2 = b/225;
        if(ans == ans2)
        {
            cout << "Equal"<< endl;
        }
        else if(ans < ans2)
        {
            cout << "Small"<< endl;
        }
        else if(ans > ans2)
        {
            cout << "Large"<< endl;
        }
    }
    

    return 0;
}