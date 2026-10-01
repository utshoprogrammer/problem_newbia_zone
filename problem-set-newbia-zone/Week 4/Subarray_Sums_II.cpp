#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n,x; cin >> n >> x;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> pre(n+1);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i-1] + v[i];
    }

    map<long long int,int> mp;
    long long int ans = 0;
    for (int i = 0; i < n; i++)
    {
    //if(pre[i] == x) ans++,শুরু থেকে বর্তমান ইনডেক্স পর্যন্ত যোগফল যদি সরাসরি টার্গেট x এর সমান হয়, তবে একটা সাবআরে পেয়ে গেলেন, তাই ans বাড়ালেন।
        if(pre[i] == x)
        {
            ans++;
        }
    //long long int val = pre[i] - x;: এটা হলো মূল ম্যাজিক। বর্তমান প্রিফিক্স সাম থেকে টার্গেট বাদ দিয়ে খুঁজছেন অতীতে এমন কোনো প্রিফিক্স সাম ছিল কি না।
        long long int val = pre[i] - x;

        auto it = mp.find(val);
    //mp.find(val): ম্যাপে চেক করছেন val নামের কোনো সাম আগে এসেছে কি না। এসে থাকলে তার ফ্রিকোয়েন্সি (it->second) সরাসরি ans-এর সাথে যোগ করে দিচ্ছেন।
        if(it != mp.end())
        {
            ans += it->second;
        }
    //mp[pre[i]]++;: বর্তমান প্রিফিক্স সামের মানটা ম্যাপে সেভ করে রাখছেন বা তার কাউন্ট বাড়িয়ে দিচ্ছেন যাতে ভবিষ্যতের ইনডেক্সগুলো একে ব্যবহার করতে পারে।
        mp[pre[i]]++;
    }
    cout << ans << endl;

    return 0;
}