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
    ll n, k; cin >> n >> k;
    ll a;


    a = k + ((n + k - 1) - k) / 2;
    ll sum1, sum2;
    sum1 = (a * (a + 1) / 2) - ((k - 1) * ((k - 1) + 1) / 2);
    sum2 = ((n + k - 1) * (n + k) / 2) - (a * (a + 1) / 2);
    a++;
    ll sum11, sum22;
    sum11 = (a * (a + 1) / 2) - ((k - 1) * ((k - 1) + 1) / 2);
    sum22 = ((n + k - 1) * (n + k) / 2) - (a * (a + 1) / 2);
    ll res = min(abs(sum2  - sum1), abs(sum22 - sum11));
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