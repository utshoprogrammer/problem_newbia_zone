#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        int total = 0;
        int count = 0;
        for (int i = 1; i <=  n; i++)
        {
            if(i >= k)
            {
                total += i;
                count++;
            }
        }
        int buy = count * k;
        cout << total - buy << endl;
        
    }

    return 0;
}