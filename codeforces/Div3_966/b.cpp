#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define ll long long
#define ull unsigned long long

using namespace std;

void    solution()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 2, 0);
    vector<ll> tab(n + 2, 0);
    ll i = 1;
    while (i <= n)
    {
        cin >> v[i];
        i++;
    }
    i = 2;
    int res = 1;
    tab[v[1]] = 1;
    while (i <= n)
    {
        if (tab[v[i] - 1] == 0 && tab[v[i] + 1] == 0)
        {
            res = 0;
            break ;
        }
        tab[v[i]] = 1;

        i++;
    }
    if (res)
        cout << "YES\n";
    else   
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}