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
    string s;
    cin >> s;
    int n = 0, k = 0;
    int i = 0;
    char c;
    while (s[i])
    {
        c = s[i];
        k = 0;
        while (s[i] == c)
        {
            k++;
            i++;
        }
        if (k >= n)
            n = k;
    }
    cout << n << endl;
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