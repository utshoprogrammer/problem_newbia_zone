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
        string s;
        cin >> s;

        deque<int> d;
        deque<int> dk;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'B' && isupper(s[i]))
            {
                d.push_back(i);
            }
            else if (s[i] != 'b' && islower(s[i]))
            {
                dk.push_back(i);
            }
            else if (s[i] == 'b')
            {
                if (!dk.empty())
                {
                    dk.pop_back();
                }
            }
            else if (s[i] == 'B')
            {
                if (!d.empty())
                {
                    d.pop_back();
                }
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (!d.empty() && i == d.front())
            {
                cout << s[i];
                d.pop_front();
            }
            else if (!dk.empty() && i == dk.front())
            {
                cout << s[i];
                dk.pop_front();
            }
        }
        cout << endl;
    }

    return 0;
}