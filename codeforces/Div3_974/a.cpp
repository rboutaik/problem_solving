#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <string>
#include <stack>
#define ll long long
#define ull unsigned long long
# define endl '\n'

using namespace std;

void    solution()
{
    int n, k; cin >> n >> k;

    int i = 0, p, g = 0, h = 0;
    while (i < n)
    {
        cin >> p;
        if (p >= k)
        {
            g += p;
        }
        else if (p == 0 && g)
            g--, h++;
        i++;
    }
    cout << h << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
      solution();
    return (0);
}