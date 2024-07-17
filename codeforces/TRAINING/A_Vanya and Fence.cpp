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
    int n, h, a, res;
    cin >> n >> h;
    res = 0;
    while (n--)
    {
        cin >> a;
        if (a > h)
            res += 2;
        else
            res++;
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