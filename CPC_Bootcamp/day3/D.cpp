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
 
// Function to perform Modular Division
ull modDiv(ull a, ull b, ull m)
{
    a = a % m;
    ull inv = modInverse(b, m);
    return (inv * a) % m;
}


void    solution()
{
    int t; cin >> t;
    
    ull mod = 1e9 + 7;
    vector<ll> v(1e6 + 1);
    int m = 1;
    v[0] = 1;
    while (m <= 1e6)
    {
        v[m] = ((m % mod) * (v[m - 1] % mod)) % mod;
        m++;
    }
    while (t--)
    {
        ull  a, b; cin >> a >> b;

        ull ans;
        ull lbast;
        ull lma9am;
        ull lma9am2;
        ull div;
        lbast = v[a];
        lma9am = ((v[b] % mod) * (v[a -b] % mod)) % mod;
        ans = modDiv(lbast, lma9am, mod);
        // if (b  > a - b)
        // {
        //     div = b;
        //     lma9am = a - b;
        // }
        // else
        // {
        //     div = a - b;
        //     lma9am = b;
        // }
        // ull i = 0;
        // lbast = 1;
        // while (i < lma9am)
        // {
        //     lbast = ((lbast % mod) * (a - i));
        //     lbast = modDiv(lbast, (ull)(i+1), mod);
        //     i++;
        // }
        // ans = lbast % mod;
        cout << ans << endl;
    }
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