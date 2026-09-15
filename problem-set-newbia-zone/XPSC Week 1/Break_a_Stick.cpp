#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i-1] + v[i];
    }
    int min = INT_MAX;
    for (int i = 0; i < pre.size(); i++)
    {
        int num = abs(pre[i] - (pre[pre.size()-1] - pre[i]));
        if(num < min)
        {
            min = num;
        }
    }
    cout << min << endl;
    
    return 0;
}