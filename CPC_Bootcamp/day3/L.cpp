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
    ll n; cin >> n;
    vector<ll> v;
    ll k = n;
    ll i = 2;
    int flag = 0;

    cout << n << ":";
    i = 2;

    while (n % 2 == 0)
    {
        flag = 1;
        cout << " " << i;
        n /=2;
    }
    i = 3;
    while ((i < 1000000 && i < k) || (i > 1000000 && i * i <= k))
    {
        while (n % i == 0)
        {
            flag = 1;
            cout << " " << i;
            n /= i;
        }
        i += 2;
    }
    if (flag == 0)
        cout << " " << k;
    cout << endl;
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
