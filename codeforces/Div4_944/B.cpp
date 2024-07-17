#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define ll long long
#define ull unsigned long long

using namespace std;

int iis_same(string s)
{
    int i;
    char c;

    c = s[0];
    i = 1;
    while (s[i])
    {
        if (s[i] != c)
            return (i);
        i++;
    }
    return (-1);
}

void    solution()
{
    string s;
    cin >> s;
    int     f;
    f = iis_same(s);
    if (s.length() == 1 || f == -1)
    {
        cout << "NO\n";
        return ;
    }
    char c;
    c = s[0];
    s[0] = s[f];
    s[f] = c;
    cout << "YES\n" << s << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}