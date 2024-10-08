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

ll    is_Prime(ll n)
{
    ll i = 3;
    int flag = 1;
    if (i % 2 == 0)
        return (0);
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            flag = 0;
            break ;
        }
        i += 2;
    }
    return (flag);
}

void    solution()
{
    int t; cin >> t;
    vector<ll> v;
    ll i = 0;
    v.push_back(2);
    ll size = 1;
    i = 3;
    while (i <= 1e6)
    {
        if (is_Prime(i))
            v.push_back(i), size++;
        i += 2;
    }
    ll n;
    while (t--)
    {
        cin >> n;
        i = 0;
        ll sum = 0;
        while (i < size && v[i] <= n)
        {
            sum += v[i];
            i++;
        }
        cout << sum << endl;
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