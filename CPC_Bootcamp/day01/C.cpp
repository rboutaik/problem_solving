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
    ll i = 0;
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    i = 1;
    ll res = 0;
    while (i < n)
    {
        if (v[i] < v[i - 1])
            res += v[i - 1] - v[i], v[i] = v[i - 1];
        i++;
    }
    cout << res << endl;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t;
    // cin >> t;
    // while (t--)
      solution();
    return (0);
}