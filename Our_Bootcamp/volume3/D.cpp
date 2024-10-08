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

    int x = n;

    string s; cin >> s;

    int z=  0, o = 0;

    int i = 0;
    while (s[i])
    {
        if (s[i] == '1')
            o++;
        else
            z++;
        i++;
    }

    int mx, mn;

    mx = max(o, z);
    mn = min(o, z);

    cout << n - (2 * mn) << endl;

    // int l = 0, r = 1, bl, br;
    // int last_l = 0;
    // while (l >= 0 && r < x)
    // {
    //     if (s[l] != s[r] && s[l] != '.' && s[r] != '.')
    //     {
    //         n -= 2;
    //         s[l] = '.';
    //         s[r] = '.';
    //         bl = l - 1;
    //         br = r + 1;
    //         int f = 0;
    //         while (bl >= 0 && br < x && s[bl] != s[br] && s[bl] != '.' && s[br] != '.')
    //         {
    //             s[bl] = '.';
    //             s[br] = '.';
    //             n -= 2;
    //             bl--;
    //             br++;
    //             f = 1;
    //         }
    //         l = br;
    //         r = l + 1;
    //     }
    //     else
    //     {
    //         l++;
    //         r++;
    //     }
    // }

    // cout << n << endl;
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

//  1