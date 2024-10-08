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
    int a, b; cin >> a >> b;
    int c = 0;
    int mn = 10;
    while (c <= 10)
    {
        mn = min(mn, (c - a) + (b - c));
        c++;
    }
    cout << mn << endl;
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