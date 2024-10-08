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
    string s; cin >> s;

    int n = s.size() * 2;

    string res = "";

    int i = 0;

    while (i < n)
    {
        res += "G";
        i++;
    }

    i  =0 ;
    while (s[i])
    {
        res[i] = s[i];
        res[n - i - 1] = s[i];
        i++;
    }
    cout << res << endl;
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