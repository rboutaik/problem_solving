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
    ll n, k; cin >> n >> k;

    vector<ll> v(n);
    int i = 0;
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    if (k > 2)
    {
        cout << "0\n";
        return ;
    }
    i = 0;
    vector<ll> tab;
    sort(v.begin(), v.end());

    ll res = v[0];
    while (i < n - 1)
    {
        int j = i+1;
        while (j < n)
        {
            res = min(res, abs(v[i] - v[j]));
            tab.push_back(abs(v[i] - v[j]));
            j++;
        }
        cout << endl;
        i++;
    }
    if (k == 2)
    {
        for (auto it: tab)
        {
            vector<ll>::iterator itt = upper_bound(v.begin(), v.end(), it);
            ll idx = itt - v.begin();
            res = min( res, min(((idx) ? abs(it - v[idx - 1]) : (ll)(1e18)), ((idx < n) ? abs(it - v[idx]) : (ll)(1e18))));
        }
    }

    cout << res << endl;
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