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

void    solution()
{
    ll n, m; cin >> n >> m;

    ll res = 0;

    vector<ll> v1(5), v2(5);

    for (ll i = 1; i <= n ; i++)
        v1[i % 5]++;
    for (ll i = 1; i <= m ; i++)
        v2[i % 5]++;


    res += v1[0] * v2[0];
    res += v1[1] * v2[4];
    res += v1[2] * v2[3];
    res += v1[3] * v2[2];
    res += v1[4] * v2[1];

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