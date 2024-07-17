#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define ll long long
#define ull unsigned long long

using namespace std;

void    solution()
{
    int n, f, k, fav, favpos;
    cin >> n >> f >> k;
    f--;
    k--;
    vector<int> v(n);
    int i = 0, tmp;
    while (i < n)
        cin >> v[i++];
    fav = v[f];
    v[f] = -1;
    sort(v.rbegin(), v.rend());
    i = n - 1;
    while (i > 0)
    {
        if (fav > v[i - 1])
        {
            tmp = v[i];
            v[i] = v[i - 1];
            v[i - 1] = tmp; 
        }
        else
            break ;
        i--;
    }
    i = 0;

    // while (i < n)
    //     cout << v[i++] <<" ";

    while (i < n && v[i] != -1)
        i++;
    if (i <= k)
    {
        cout << "YES\n";
        return ;
    }
    i--;
    while (i >= 0 && v[i] == fav)
        i--;
    i++;
    if (i <= k)
        cout << "MAYBE\n";
    else
        cout << "NO\n";
    // else if (v[i] != fav)
    //     cout << "NO\n";
    // else
    // {
    //     while (i > 0 && v[i] == fav)
    //         i--;
    //     if (i <= k)
    //         cout << "MAYBE\n";
    //     else
    //         cout << "NO\n";
    // }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}