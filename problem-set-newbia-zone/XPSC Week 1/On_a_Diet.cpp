#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m, k;

    cin >> n >> m >> k;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    queue<long long int> q;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if(v[i] <= k)
        {
            q.push(v[i]);
            if(v[i]+q.front() <= k)
                cout <<"Yes"<<endl;
        }
        else{
            cout <<"No" << endl;
        }
    }

    return 0;
}