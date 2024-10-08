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
    cin >> n;
    vector<ll> v(n);
    ll i = 0, f = 0;
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    i = 0;
    while (i < n)
    {
        cout << v[(i + 1) % n];
        if (i + 1 < n)
            cout << " ";
            i++;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}