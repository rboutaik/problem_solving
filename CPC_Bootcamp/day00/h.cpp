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
    vector<ll> v(n);
    ll i = 0, d;
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    i = 0;
    ll dif = 0, sum1 = 0, sum2 = 0;
    int s = 1;
    while (i < n)
    {
        int j = 0;
        while (j < s)
        {
            sum1 += v[j];
            j++;
        }
        j = 0;
        while (j < n)
        {
            sum2 += v[j];
            j++;
        }
        if (dif >= (abs(sum1 - sum2)))
            dif = abs(sum1 - sum2);
        s++;
        i++;
    }
    cout << dif << endl;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t;
    // cin >> t;
    // while (t--)
      solution();
    return (0);
}

