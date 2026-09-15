#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while (n--)
    {
        string s; cin >> s;
        
        int len = s.size();
        // এটি একটি ফ্ল্যাগ (Flag) এটি দিয়ে নজর রাখা হচ্ছে আমরা ইতোমধ্যে কোনো অক্ষর ইনসার্ট (যোগ) করেছি কি না
        bool insert_char = false;

        string ans = "";

        for (int i = 0; i < len-1; i++)
        {
            ans += s[i];

            // লুপে যাওয়ার পর যদি দেখা যায় পাশাপাশি দুটি অক্ষর সমান (যেমন: "aa", "bb")
            if(insert_char == false && s[i] == s[i+1])
            {
                // যদি অক্ষরটি 'a' হয়, তবে মাঝখানে একটি 'b' বসিয়ে দেওয়া হচ্ছে (যেমন: "aa" হয়ে যাবে "aba")
                if(s[i] == 'a')
                {
                    ans += 'b';
                }
                // যদি অক্ষরটি 'a' ছাড়া অন্য কিছু হয়, তবে মাঝখানে একটি 'a' বসিয়ে দেওয়া হচ্ছে
                else{
                    ans += "a";
                }
                // এরপর insert_char = true করে দেওয়া হচ্ছে
                insert_char = true;
            }
        }
        // লুপ শেষ হওয়ার পরও যদি কোনো রিপিটেড অক্ষর না পাওয়া যায় (যেমন: "abc"), তার মানে ভেতরে কোনো অক্ষর বসানো হয়নি
        // তখন স্ট্রিংয়ের একদম শুরুতে একটি অক্ষর বসিয়ে দেওয়া হচ্ছে:
        // শুরুর অক্ষরটি 'a' হলে সামনে একটি 'b' বসানো হচ্ছে ("b" + s)
        // অন্যথা, সামনে একটি 'a' বসানো হচ্ছে ("a" + s)

        ans += s[len-1];

        if(insert_char == false)
        {
            if(s[0] == 'a')
            {
                ans = 'b'+s;
            }
            else{
                ans = 'a' + s;
            }
        }
        cout << ans << endl;
          
    }
    
    return 0;
}