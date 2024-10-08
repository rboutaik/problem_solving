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

    ll mx = 0, bmx = 0;
    vector<ll> v(n);
    int i = 0;
    while (i < n)
    {
        cin >> v[i];
        if (v[i] >= mx)
            bmx = v[mx], mx = i;
        i++;
    }
    if (n == 1 || n == 2)
    {
        cout << "-1\n";
        return ;
    }

    sort(v.begin(), v.end());
    i = 0;
    ll avg = 0;
    while (i < n)
    {
        avg += v[i];
        i++;
    }
    float counter = 0;
    i = 0;
    ll x = (2 * n * (v[n / 2])) - avg + 1;
    if ((float)v[n / 2] < ((avg * 1.0) / (2 * n)))
    {
        cout << "0\n";
        return ;
    }
    cout << (ll)x << endl;

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