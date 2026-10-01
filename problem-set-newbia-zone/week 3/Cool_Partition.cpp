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
        
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<int> s1;
        set<int> s2;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            s1.insert(v[i]);
            s2.insert(v[i]);

            if(s1.size() == s2.size())
            {
                count++;
                s2.clear();
            }
        }
        cout << count << endl;
        
    }

    return 0;
}