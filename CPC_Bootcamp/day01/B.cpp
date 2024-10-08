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
    int n; cin >> n;
    int e = 0, o = 0;
    int i = 0, k;
    while (i < n)
    {
        cin >> k;
        if (k % 2 == 0)
            e += k;
        else
            o += k;
        i++;
    }
    if (e > o)
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