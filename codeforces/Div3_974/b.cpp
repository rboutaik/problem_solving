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

ull    power(ull a, ull b)
{
    // ull  mod = 1e9 + 7;
    ull  ans =1;
    while (b > 0)
    {
        if (b % 2 == 1)
            ans = ((ans) *  (a));
        a = (a) * (a);
        b /= 2;
    }
    return (ans);
}

void    solution()
{
    ll n, k; cin >> n >> k;

    ll res = n - k + 1;

    ll ans = 0;
    if (n % 2 && res % 2)
        ans = (n - res) / 2 + 1;
    if (n % 2 == 0 && res % 2)
        ans = (n - res + 1) / 2;
    if (n % 2 != 0 && res % 2 == 0)
        ans = (n - res) / 2 + 1;
    if (n % 2 == 0 && res % 2 == 0)
        ans = (n - res) / 2;

    
    if (ans % 2)
        cout << "NO\n";
    else
        cout << "YES\n";
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