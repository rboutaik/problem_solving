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
    ll  n;
    cin >> n;

    vector<ll> v(n);

    int i = 0;
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    if (n == 2 && abs(v[0] - v[1]) > 1)
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