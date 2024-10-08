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


ull    fact(ull n)
{
    ull i = 2;
    ull fact = 1;
    ull mod = 1e9 + 7;
    while (i <= n)
    {
        fact = ((fact % mod) * i) % (mod);
        i++;
    }
    return (fact);
}

ull    power(ull a, ull b)
{
    ull  mod = 1e9 + 7;
    ull  ans =1;
    while (b > 0)
    {
        if (b % 2 == 1)
            ans = ((ans % mod) *  (a % mod)) % mod;
        a = (a % mod) * (a % mod);
        b /= 2;
    }
    return (ans);
}
ull modInverse(ull a, ull m) { return power(a, m - 2); }
 
ull modDiv(ull a, ull b, ull m)
{
    a = a % m;
    ull inv = modInverse(b, m);
    return (inv * a) % m;
}

void    solution()
{
    int n, t; cin >> n >> t;
    vector<ll> v(n);
    for (auto &i:v) cin >> i;
    ull res = 0;
    ull prod = 0;
    ull l = 1;
    ull r = 1e18;

    while (l <= r)
    {
        ull mid = l + (r - l) / 2;
        prod = 0;
        for (int i = 0; i < n; i++)
        {
            prod += mid / v[i];
            if (prod > t)
                break ;
        }
        if (prod >= t)
        {
            res = mid;
            r = mid - 1;
        }
        if (prod < t)
            l = mid + 1;
    }
    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
      solution();
    return (0);
}