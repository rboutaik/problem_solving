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
    ll  n, s, m, l, r, _l = 0, _r = 0;
    ll  i, res = 0;
    cin >> n >> s >> m;
    i = 0;
    _r = 0;

    while (i < n)
    {
        cin >> l >> r;
        if (l - _r >= s)
            res = 1;
        if (i + 1 == n && (m - r >= s))
            res = 1;
        _l = l;
        _r = r;
        i++;
    }
    if (res)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}