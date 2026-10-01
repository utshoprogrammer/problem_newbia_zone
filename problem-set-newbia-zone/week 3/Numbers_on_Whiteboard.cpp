#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        priority_queue<int> pq;
        for (int i = 1; i <= n; i++)
        {
            pq.push(i);
        }

        cout << 2 << endl;
        for (int i = 0; i < n - 1; i++)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();

            cout << x << " " << y << endl;

            int next_val = (x + y + 1) / 2;

            pq.push(next_val);
            
        }
        // or
        
        // cout << 2 << endl;
        // int cur_val = n;
        // for (int i = n - 1; i >= 1; i--)
        // {
        //     cout << cur_val << " " << i << endl;

        //     cur_val = (cur_val + i + 1) / 2;
        // }
    }

    return 0;
}