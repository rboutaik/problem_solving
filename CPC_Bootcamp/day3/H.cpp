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

ll    is_Prime(ll n, map<int, int> &mp)
{
    ll i = 2;
    int flag = 1;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            mp[n] = 2;
            flag = 0;
            break ;
        }
        i++;
    }
    if (flag)
        mp[n] = 1;
    return (flag);
}

void    solution()
{
    ll l, r; cin >> l >> r;
    map<int, int> mp;
    ll i = l, flag = 0;

    while (i <= r)
    {
        if (mp[i] == 2 || (i % 2 == 0 && i != 2))
        {
            i++;
            continue;
        }
        else
        {
            if (is_Prime(i, mp))
                flag = 1;
        }
        i++;
    }
    i = l;
    if (!flag)
        cout << "Absent\n";
    else
    {
        while (i <= r)
        {
            if (mp[i] == 1)
                cout << i << endl;
            i++;
        }
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