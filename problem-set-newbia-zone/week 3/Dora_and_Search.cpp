#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        
        int l = 0,r = n-1;
        int min_num = 1,max_num = n;

        bool flag = false;

        while (l < r)
        {
            if(v[l] == min_num)
            {
                l++;
                min_num++;
            }
            else if(v[l] == max_num)
            {
                l++;
                max_num--;
            }
            else if(v[r] == min_num)
            {
                r--;
                min_num++;
            }
            else if(v[r] == max_num)
            {
                r--;
                max_num--;
            }
            else{
                cout << l+1 <<" " << r+1 << endl;
                flag = true;
                break;
            }
        }
        if(flag == false)
        {
            cout << -1 << endl;
        }
        
    }
    
    return 0;
}