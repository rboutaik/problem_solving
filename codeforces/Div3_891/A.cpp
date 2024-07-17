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
    int n, a, res = 0;
    cin >> n;
    while (n--)
    {
        cin >> a;
        res += a;
    }
    if (res % 2)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}