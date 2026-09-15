#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int s = 0;
    int d = 0;

    int i = 0;
    int j = n-1;
    
    int flag = 1;
    while (i <= j)
    {
        if(flag % 2 == 1)
        {
            if(v[i] > v[j])
            {
                s += v[i];
                i++;
            }
            else{
                s+= v[j];
                j--;
            }
        }
        else if(flag % 2 == 0)
        {
            if(v[i] > v[j])
            {
                d += v[i];
                i++;
            }
            else{
                d+= v[j];
                j--;
            }
        }
        flag++;
    }
    cout << s << " " << d << endl;

    return 0;
}