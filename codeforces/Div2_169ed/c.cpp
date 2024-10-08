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
    ll  n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll i = 0;
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    sort(v.rbegin(),v.rend());
    i = 0;
    ll a = 0, b = 0;
    while (i < n)
    {
        if (i + 1 < n && v[i] - v[i+ 1] <= k)
        {
            v[i + 1] += v[i] - v[i+ 1];
            k -= v[i] - v[i+ 1];
        }
        else
        {
            if (i + 1 < n)
                v[i + 1] += k;
            k = 0;
        }
            
        i += 2;
    }
    i = 0;
    while (i < n)
    {
        a += v[i];
        if (i + 1 < n)
            b += v[i + 1];
        i += 2;
    }
    cout << a - b << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}