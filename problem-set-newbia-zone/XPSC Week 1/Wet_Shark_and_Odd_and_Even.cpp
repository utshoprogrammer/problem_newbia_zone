#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    if(sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        long long int min_num = LLONG_MAX;
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i]%2 == 1)
            {
                if(v[i] < min_num)
                {
                    min_num = v[i];
                }
            }
        }
        sum = sum - min_num;
        cout << sum << endl;
    }  
    
    return 0;
}