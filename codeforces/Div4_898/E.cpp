#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define ll long long

using namespace std;

void    solution()
{
    ll  n, x, w = 0, res = 1;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n ; i++)
    {
        cin >> v[i];
    }
    ll l = 1, r = 1e9 * 2, mid;
    while (l <= r)
    {
        w = 0;
        mid = l + (r - l ) / 2;
        for (int i = 0; i < v.size(); i++)
        {
            if (mid - v[i] > 0)
                w += mid - v[i];
        }
        if (w == x)
            break ;
        if (w > x)
            r = mid - 1;
        else
        {
            res = mid;
            l = mid + 1;
        }
    }
    if (w <= x)
        res = mid;
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}