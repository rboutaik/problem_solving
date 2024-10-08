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

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}


void    solution()
{
    ll n, t; cin >> t;
    map<ll, ll> mp;
    vector<ll> v(t);
    vector<ll> lpr(t);
    vector<ll> rpr(t);
    ll x = t;
    ll i = 0, mxx = 1;

    while (i < t)
    {
        cin >> v[i];
        if (i == 0)
            lpr[i] = v[i];
        else
            lpr[i] = gcd(lpr[i - 1], v[i]);
        i++;
    }
    i = t - 2;
    rpr[t - 1] = v[t -1];
    while (i >= 0)
    {
        rpr[i] = gcd(rpr[i + 1], v[i]);
        i--;
    }
    i = 0;
    ll ans = 1;
    while (i < t)
    {
        if (i == 0)
            mxx = rpr[i + 1];
        else if (i == t - 1)
            mxx = lpr[i - 1];
        else
        {
            mxx = gcd(lpr[i - 1], rpr[i+1]);
        }
        ans = max(ans, mxx);
        i++;
    }
    cout << ans << endl;

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