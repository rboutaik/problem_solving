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
    int n; cin >> n;
    string s; cin >> s;
    int a, b;

    if (s.find('R') != string::npos)
    {
        a = s.find('R') + 1;
        b = s.rfind('R') + 1;

        if (s[b] =='.')
            b++;
    }
    else
    {
        b = s.find('L') + 1;
        a = s.rfind('L') + 1;

        if (s[b - 2] == '.')
            b--;

    }


    cout  << a << " " << b << endl;
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