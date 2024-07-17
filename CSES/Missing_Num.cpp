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
    ll n, res = 0, d, i = 0;
    cin >> n;
    while (i < n - 1)
    {
        cin >> d;
        res += d;
        i++;
    }
    cout << (n * (n + 1)/2) - res;
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
        solution();
    return (0);
}