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
        int m;
        cin >> m;

        while (m--)
        {
            string s;
            cin >> s;

            if (s.size() != n)
            {
                cout << "NO" << endl;
                continue;
            }
        
            map<long long, char> mp1;
            map<char, long long int> mp2;

            bool flag = true;

            for (int i = 0; i < n; i++)
            {
                long long int val = v[i];
                char ch = s[i];
                // // যদি সংখ্যাটি আগে থেকেই ম্যাপ করা থাকে, কিন্তু অক্ষরটি আলাদা হয়
                if (mp1.count(val) && mp1[val] != ch)
                {
                    flag = false;
                    break;
                }
                // যদি অক্ষরটি আগে থেকেই ম্যাপ করা থাকে, কিন্তু সংখ্যাটি আলাদা হয়
                if (mp2.count(ch) && mp2[ch] != val)
                {
                    flag = false;
                    break;
                }

                mp1[val] = ch;
                mp2[ch] = val;
            }

            if (flag == true)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}