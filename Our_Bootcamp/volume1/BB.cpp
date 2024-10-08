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
    int n, k; cin >> n >> k;
    vector<int> v(n);

    k--;

    for (auto &i:v) cin >> i;

    int i = 0, j = 0, res = 0;
    if (v[k - i] == 1)
        res++, i++, j++;
    while (1)
    {
        if (k - i < 0 && k + j >= n)
            break ;
        if (k - i >= 0 && k +j < n)
        {
            if (v[k - i] == 1 && v[j + k] == 1)
                res+= 2;
        }
        else if (k - i >= 0 && v[k - i] == 1)
            res++;
        else if (k + j < n && v[k + j] == 1)
            res++;

        i++;
        j++;
    }
    cout << res <<  endl;
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