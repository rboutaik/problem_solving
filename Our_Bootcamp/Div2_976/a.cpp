#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <string>
#include <stack>
#define ll long long
#define ull unsigned long long
# define endl '\n'

using namespace std;


ull    power(ull a, ull b)
{
    ull  ans =1;
    while (b > 0)
    {
        if (b % 2 == 1)
            ans = ((ans) *  (a));
        a = (a) * (a);
        b /= 2;
    }
    return (ans);
}

ll calc(ll n, ll k)
{
    int i = 0;
    if (n < k)
        return (1);
    ll x = k;

    ll odl_X = k;
    while (x <= n)
    {
        odl_X = x;
        x *= k;
        i++;
    }


    return (odl_X);
}


void    solution()
{
    ll n, k;

    cin >> n >> k;


    if (n < k || k == 1)
        cout << n << endl;
    else
    {
        int res = 0;
        while (n >= k)
        {
            n -= calc(n, k);
            res++;
        }
        cout << res + n << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
      solution();
    return (0);
}