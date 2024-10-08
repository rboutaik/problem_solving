#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <stack>
#define ll long long
#define ull unsigned long long
# define endl '\n'

using namespace std;

void    solution()
{
    ll  n; cin >> n;
    vector<ll> v(n);
    map<int, int> mp;
    for (auto &i:v) cin >> i, mp[i]++;
    int res = 1;
    ll  m;  cin >> m;
    int i = 0;
    ll k;
    while (i < m)
    {
        cin >> k;
        if (mp[k] == 0)
            res = 0;
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