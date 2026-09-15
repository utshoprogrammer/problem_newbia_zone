#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    cin >> n >> x;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> ans;
    for (int i = 0; i < n; i++)
    {
        if(v[i] != x)
        {
            ans.push_back(v[i]);
        }
    }
    if(v.size() == 0)
    {
        cout << "" << endl;
    }
    else {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] <<" ";
        }
        
    }
    
    return 0;
}