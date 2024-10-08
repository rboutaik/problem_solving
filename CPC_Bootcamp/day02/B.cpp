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
    ll n, x; cin >> n >> x;
    vector<ll> v(n);
    for (auto &i:v) cin >> i;
    ll i = 0, sum = 0, res = 0;
    int j = i;
    while (j < n)
    {
        sum += v[j];
        while (i <= j && sum > x)
        {
            sum -= v[i++];
        }
        if (sum == x)
            res++;
        j++;
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