#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int count = 0;
        v.push_back(0);
        for (int i = 0; i < n;i++)
        {
            if(v[i] == v[i+1] && v[i] == 1)
            {
                count += v[i];
                i += 1;
            }
            else
            {
                count++;
                //i++;
            }
        }
        cout << min(n,count) << endl;    
    }
    return 0;
}