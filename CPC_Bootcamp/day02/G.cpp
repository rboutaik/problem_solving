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
    ll n, j = 0; cin >> n;
    vector<ll> v(n);
    while (j < n)
        cin >> v[j++];
    ll k; cin >> k;
    ll i = 0, a,b;
    vector<ll>::iterator it;
    while (i < k)
    {
        cin >> a;
        it = lower_bound(v.begin(), v.end(), a);
        if (it == v.end())
            cout << n << " ";
        else
            cout << it - v.begin() << " ";
        it = upper_bound(v.begin(), v.end(), a);
        if (it == v.end())
            cout << n;
        else
            cout << it - v.begin();
        cout << endl;
        i++;
    }
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