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
    int n, t, k ,d ; cin >> n >> t >> k >> d;

    int res = 0;
    int sec = 0;
    int nn = n;
    while (1)
    {
        if (sec == t)
            nn -= k, sec = 0;
        if (nn <= 0)
            break ;
        res++;
        sec++;
    }

    int res2 = 0, f = 0;
    sec = 0;
    int tt = 0;
    int counter = 0;
    while (1)
    {
        if (sec == t)
            n -= k, sec = 0;
        if (tt == t)
            n -= k, tt = 0;
        if (n <= 0)
            break ;
        if (f == 0 && counter == d)
            f = 1, tt = 0;
        res2++;
        if (f)
            tt++;
        sec++;
        counter++;
    }

    if (res2 < res)
        cout << "YES\n";
    else
        cout << "NO\n";
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