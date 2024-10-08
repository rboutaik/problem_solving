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
    map<int, int> mp;
    ll n, x, i = 0, x1 = -1, x2 = -1, f;
    cin >> n >> x;
    while (i < n)
    {
        cin >> f;
        auto it = mp.find(x - f);
        if (it != mp.end())
        {
            x1 = it->second + 1;
            x2 = i + 1;
        }
        else
        {
            mp[f] = i;
        }
        i++;
    }
    if (x1 != -1)
        cout << x1 << " " << x2 << endl;
    else
        cout << "IMPOSSIBLE\n";
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
        solution();
    return (0);
}