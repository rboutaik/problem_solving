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
    ll n; cin >> n;

    vector<ll> v(n);

    ll i = 0;
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    sort(v.rbegin(), v.rend());

    ll a, b, c;

    ll flag = 0;
    i = 0;
    while (i < n - 2)
    {
        a = v[i];
        b = v[i + 1];
        c = v[i + 2];
        if (a + b > c && a + c > b && b + c > a)
        {
            flag = 1;
            break ;
        }
        i++;
    }


    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
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