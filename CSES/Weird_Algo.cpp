#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define ll long long
#define ull unsigned long long

using namespace std;

void    f(ll n)
{
    cout << " " << n;
    if (n == 1)
        return ;
    if (n % 2 == 0)
        f(n / 2);
    else
        f(n * 3 + 1);
}

void    solution()
{
    ll n;
    cin >> n;
    cout << n;
    if (n == 1)
        return ;
    if (n % 2 == 0)
        f(n / 2);
    else
        f(n * 3 + 1);
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
        solution();
    return (0);
}