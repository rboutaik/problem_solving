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
    int n , d, s,res;
    cin >> n;
    res = 100000000;
    for (int i = 0; i < n; i++)
    {
        cin >> d >> s;
        res = min(res, d + (s - 1)/ 2);
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