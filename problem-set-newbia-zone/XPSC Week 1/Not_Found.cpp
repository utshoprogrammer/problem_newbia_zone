#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(),s.end()),s.end());
    vector<char> v;
    for (char i = 'a'; i <= 'z'; i++)
    {
        v.push_back(i);
    } 
    int flag = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if(s[i] != v[i])          //or, if(i >= (int)s.size() || s[i] != v[i])
        {
            cout << v[i] << endl;
            flag = 0;
            break;
        }
    }
    if(flag == 1) cout << "None" << endl;
    
    return 0;
}