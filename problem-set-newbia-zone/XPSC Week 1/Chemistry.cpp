#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        sort(s.begin(), s.end());

        int fre[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            fre[s[i] - 'a']++;
        }
        int count_odd = 0;
        for (int i = 0; i < 26; i++)
        {
            if (fre[i] % 2 == 1)
            {
                count_odd++;
            }
        }

        if (count_odd - 1 <= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

// or

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;

//         sort(s.begin(), s.end());
//         s.erase(unique(s.begin(), s.end()), s.end());
//         string temp = s;
//         int count_odd = 0;
//         for (int i = 0; i < temp.size(); i++)
//         {
//             count_odd++;
//         }
//        //cout << count_odd << endl;
//         if (count_odd <= k)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }