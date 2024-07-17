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
    int tab[7] = {0};
    int n, m;
    string s;
    cin >> n >> m;
    cin >> s;
    int i  = 0;
    while (s[i])
    {
        tab[s[i] - 65]++;
        i++;
    }
    int res = 0;
    i = 0;
    while (i < 7)
    {
        if (m - tab[i] >= 0)
            res += m - tab[i];
        i++;
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}