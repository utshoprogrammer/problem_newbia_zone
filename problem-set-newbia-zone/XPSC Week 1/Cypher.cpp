#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int num; cin >> num;
            string s;
            cin >> s;

            int x = v[i];

            for (int i = 0; i < s.size(); i++)
            {
                if(s[i] == 'D')
                {
                    if(x == 9)
                    {
                        x = -1;
                    }
                    x++;
                }
                else if(s[i] == 'U')
                {
                    if(x == 0)
                    {
                        x = 10;
                    }
                    x--;
                }
            }
            a.push_back(x);
            
        }
        for (int num : a)
        {
            cout << num <<" ";
        }
        cout << endl;
            
    }
    return 0;
}