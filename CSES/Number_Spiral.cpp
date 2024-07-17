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
    ull x, y, maax, res, miin;
    cin >> x >> y;
    maax = max(x, y);
    miin = min(x, y);
    if (y >= x )
    {
        if (y % 2 == 0)
            res = (maax * maax - (maax - 1)) - (maax - miin);
        else
            res = (maax * maax - (maax - 1)) + (maax - miin);
    }
    else
    {
        if (x % 2 == 0)
            res = (maax * maax - (maax - 1)) + (maax - miin);
        else
            res = (maax * maax - (maax - 1)) - (maax - miin);
    }

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