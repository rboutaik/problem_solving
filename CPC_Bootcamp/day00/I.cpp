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
    string  s;
    cin >> s;
    int i = 0, as = 0,bs = 0, f = 1;
    while (s[i])
    {
        if (s[i] == 'A')
        {
            as += s[i + 1] - 48;
        }
        else
        {
            bs += s[i + 1] - 48;
        }
        if (as == 10 && bs == 10)
            f = 0;
        if (as > 10 && f)
        {
            cout << "A\n";
            break;
        }
        if (bs > 10 && f)
        {
            cout << "B\n";
            break ;
        }
        if (!f && bs - as >=2)
        {
            cout << "B\n";
            break ;
        }
        if (!f && as - bs >=2)
        {
            cout << "A\n";
            break ;
        }
        i += 2;
    }
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