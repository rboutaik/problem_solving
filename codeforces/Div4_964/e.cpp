#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cmath>
#define ll long long
#define ull unsigned long long

using namespace std;

void    solution()
{
    ll  l, r;

    cin >> l >> r;
    ll  steps = 0;
    ll  f = l, s = l+1;

    while (f > 0)
    {
        f/=3;
        s*=3;
        steps++;
    }

    f = s;
    while (f > 0)
    {
        f /= 3;
        steps++;
    }

    l += 2;
    f = l;
    while (l <= r)
    {
        steps += floor(log(f) / log(3)) + 1;
        l++;
        f = l;
    }
    cout << steps << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}