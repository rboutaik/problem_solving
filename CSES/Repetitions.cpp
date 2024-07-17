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
    string s;
    int i = 0, res = 0, start;
    cin >> s;
    while (s[i])
    {
        start = i;
        while (s[i] && s[i] == s[start])
            i++;
        if (i - start > res)
            res = i - start;
    }
    cout << res << endl;
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
        solution();
    return (0);
}