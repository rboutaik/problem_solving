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
    ll i;
    vector<ll> v(n);

    i = 0;
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    ll mn = 2e10, mx = 0, l = 0, r = 1, res = 0;
    while (r < n)
    {
        if (v[r] - v[l] <= 2)
        {
            res++;
            l++;
            r++;
        }
        else
        {
            l++;
            r++;
            mx = max(mx, res);
            mn = min(mn, res);
            res = 0;
        }
    }
    mx = max(mx, res);
    mn = min(mn, res);
    cout << mn + 1 << " " << mx + 1 << endl;
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