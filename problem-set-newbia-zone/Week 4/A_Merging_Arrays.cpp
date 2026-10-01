// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n,m; cin >> n >> m;
//     multiset<long long int> ms;

//     for (int i = 0; i < n; i++)
//     {
//         int x; cin >> x;
//         ms.insert(x);
//     }
//     for (int i = 0; i < m; i++)
//     {
//         int y; cin >> y;
//         ms.insert(y);
//     }
//     for (auto val : ms)
//     {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> v1(n);
    vector<int> v2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    vector<int> ans;
    ans = v1;
    for (int i = 0; i < m; i++)
    {
        ans.push_back(v2[i]);
    }
    sort(ans.begin(),ans.end());

    // int i = 0, j = 0;

    // while (i < n && j < m)
    // {
    //     if (v1[i] <= v2[j])
    //     {
    //         ans.push_back(v1[i]);
    //         i++;
    //     }
    //     else
    //     {
    //         ans.push_back(v2[j]);
    //         j++;
    //     }
    // }
    // while (i < n)
    // {
    //     ans.push_back(v1[i]);
    //     i++;
    // }
    // while (j < m)
    // {
    //     ans.push_back(v2[j]);
    //     j++;
    // }

    for (auto val : ans)
    {
        cout << val << " ";
    }

    return 0;
}