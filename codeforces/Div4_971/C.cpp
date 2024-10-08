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
    ll x,y,k; cin >> x >> y >> k;

    ll res1, res2 ,res;

    res1 = (x % k) ? (x / k) + 1 : (x / k);
    res2 =  (y % k) ? (y / k) + 1 : (y / k);
    res = res1 + res2 + abs(res1 - res2);
    cout << res << endl;
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