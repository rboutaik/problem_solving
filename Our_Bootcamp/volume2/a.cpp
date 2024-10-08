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
    int res = 0;
    string s; cin >> s;

    char c = 'a';
    int i = 0;
    while (s[i])
    {
        int a = s[i] - 'a';
        int b = c - 'a';
        if (a >= b && a <= b + 13)
        {
            res += a - b;
        }
        else if (a >= b && a >= b + 13)
        {
            res += b + (26 - a);
        }
        else if (a <= b && a <= b - 13)
        {
            res += a + ((26 - b));
        }
        else if (a <= b && a > b - 13)
        {
            res += b - a;
        }
        c = s[i];
        i++;
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