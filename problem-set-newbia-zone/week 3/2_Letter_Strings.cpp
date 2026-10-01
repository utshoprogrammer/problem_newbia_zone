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
        map<string,long long int> mp;
        for (int i = 0; i < n; i++)
        {
            string t;
            cin >> t;
            mp[t]++;
        }
        
        long long int ans = 0;

        for (auto [x, y] : mp)
        {
            for (int j = 0; j < 2; j++)
            {
                char ch = x[j];
                // 'a' থেকে 'k' পর্যন্ত ক্যারেক্টারগুলো ট্রাই করছি
                for (char c = 'a'; c <= 'k'; c++)
                {
                    // নিজের সমান হলে স্কিপ করব
                    if (c == ch)
                    {
                        continue;
                    }

                    string str = x;
                    str[j] = c;

                    // যদি এই str স্ট্রিংটি ম্যাপে থাকে, তবে পেয়ার কাউন্ট যোগ করব
                    if (mp.count(str))
                    {
                        ans += y * mp[str];
                    }
                }
            }
        }
        // প্রতিটি পেয়ার দুইবার কাউন্ট হওয়ায় ২ দিয়ে ভাগ করতে হবে
        cout << ans / 2 << endl;
    }

    return 0;
}