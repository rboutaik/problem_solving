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
    ull n, k; cin >> n >> k;

    vector<ull> v(n);
    vector<ull> lpr(n + 1);
    vector<ull> rpr(n + 1);
    ull mod = 1e9 + 7;
    ll int i = 0;
    lpr[0] = 1;
    while (i < n)
    {
        cin  >> v[i];
        if (i == 0)
            lpr[i+1] = v[i];
        else
            lpr[i + 1] = (lpr[i] * v[i]) % mod;
        i++;
    }
    i = n - 1;
    rpr[0] = 1;
    rpr[i + 1] = v[i];
    i--;
    while (i >= 0)
    {
        rpr[i + 1] = (rpr[i + 2] * v[i]) % mod;
        i--;
    }

    i = 0;
    ll l,r;
    while (i < k)
    {
        cin >> l >> r;
            l--;
            r++;
        ull ans;
        if (l != 0)
            ans = modDiv(rpr[1], lpr[l], mod);
        else
            ans = rpr[1];
        if (r != n + 1)
            ans = modDiv(ans, rpr[r], mod);
        cout << ans << endl;
        i++;
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