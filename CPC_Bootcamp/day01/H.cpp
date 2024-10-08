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
    ll  n, q;
    cin >> n >> q;
    ll i = 0;
    vector<ll> v(n);
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    i = 0;
    ll l,r;
    vector<ll> tab(2e5);
    tab[0] = v[0];
    i = 1;
    while (i < n)
    {
        tab[i] = tab[i - 1] ^ v[i];
        i++;
    }
    i = 0;
    while (i < q)
    {
        cin >> l >> r;
        if (l - 1 != 0)
            cout << (tab[r - 1] ^ tab[l - 2]) << endl;
        else
            cout << (tab[r - 1]) << endl;
        i++;
    }
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