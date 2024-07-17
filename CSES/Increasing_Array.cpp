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
    ll n, i = 0, res = 0;
    cin >> n;
    vector<ll> v(n);
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    i = 1;
    while (i < n)
    {
        if (v[i] < v[i - 1])
        {
            res += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
        i++;
    }
    cout << res << endl;
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
        solution();
    return (0);
}