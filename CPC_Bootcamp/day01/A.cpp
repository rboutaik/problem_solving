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
    int n, k;
    cin >> n >> k;
    int i = 0, m, f= 0;
    while (i < n)
    {
        cin >> m;
        if (m == k)
            f = 1;
        i++;
    }
    if (f)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
      solution();
    return (0);
}