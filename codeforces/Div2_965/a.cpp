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
    ll  x,y, k;
    cin >> x >> y >> k;
    ll sx, sy;

    sx = x;
    sy = y;
    ll  i = 0, xoffs = 1, yoffs = 1, f = 1;

    if (k == 1)
    {
        cout << x << " " << y << endl;
        return ;
    }
    x = x * k;
    y = y * k;
    sx = sx * k;
    sy = sy * k;
    if (k % 2 == 0)
    {
        cout << x + xoffs << " " << y + yoffs << endl;
        cout << f * sx + (-1 * (x + xoffs)) << " " << f * sy + (-1 * (y + yoffs)) << endl;
            i += 2;
            xoffs++;
            yoffs++;
        while (i < k)
        {
            cout << x + xoffs << " " << y + yoffs << endl;
            cout << (-1 * (x + xoffs)) << " " << (-1 * (y + yoffs)) << endl;
            i += 2;
            xoffs++;
            yoffs++;
        }
    }
    else if (k % 2)
    {
         cout << x  << " " << y  << endl;
        // cout << f * sx + (-1 * (x + xoffs)) << " " << f * sy + (-1 * (y + yoffs)) << endl;
            i += 1;
            xoffs++;
            yoffs++;
        while (i < k)
        {
            cout << x + xoffs << " " << y + yoffs << endl;
            cout << (-1 * (x + xoffs)) << " " << (-1 * (y + yoffs)) << endl;
            i += 2;
            f = -f;
            xoffs++;
            yoffs++;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}