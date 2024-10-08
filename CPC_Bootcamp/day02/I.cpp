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
    
}

void    solution1()
{
    ll n, w;
    cin >> n >> w;
    vector<ll> v(n);
    ll i = 0;
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    ll l = 1, r = 1e10, res = 1, water = 0, mid = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        i = 0;
        water = 0;
        while (i < n)
        {
            if (mid - v[i] > 0)
                water += mid - v[i];
            i++;
        }
        if (water == w)
            break ;
        if (water > w)
        {
            r = mid - 1;
        }
        else
        {
            res = mid;
            l = mid + 1;
        }
    }
    if (water <= w)
        res = mid;
    cout << res << endl;
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