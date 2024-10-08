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
    ll n; cin >> n;
    ll i = 2;
    ll fact = 1;
    while (i <= n)
    {
        fact = ((fact % 998244353) * i) % 998244353;
        i++;
    }
    cout << fact << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
      solution();
    return (0);
}