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
    int  l,r, L, R;
    cin >> l >> r;
    cin >> L >> R;
    int res = 0;

    if ((r < L) || (R < l))
        res = 1;
    else if (l == L && r == R)
        res = R - L;
    else if ((l > L && r < R))
        res = r - l + 2;
    else if ((L > l && R < r))
        res = R - L + 2;
    else if (l <= L && r <= R)
        res = r - L + !(l == L) + !(r == R);
    else if (l >= L && R <= r)
        res = R - l + !(l == L) + !(R == r);
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