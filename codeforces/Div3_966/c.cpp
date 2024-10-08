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
    ll  n, m;
    string  s;
    ll  res = 1, i = 0, k;
    cin >> n;
    vector<ll> a(n);
    while (i < n)
    {
        cin >> a[i];
        i++;
    }
    cin >> m;
    vector<string> str(m);
    i = 0;
    while (i < m)
    {
        vector<ull> v(200, 1e9 + 2);
        vector<ull> tab;
        cin >> str[i];
        if (str[i].length() != n)
            res = 0;
        ll j = 0;
        while (j < n && res)
        {
            auto it = std::find(tab.begin(), tab.end(), a[j]);
            if (v[str[i][j]] != a[j] && (v[str[i][j]] != (1e9 + 2) || it != tab.end()))
                res = 0;
            v[str[i][j]] = a[j];
            tab.push_back(a[j]);
            j++;
        }
        i++;
        if (res == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
        res = 1;
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}