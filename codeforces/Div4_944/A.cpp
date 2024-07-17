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
    int x, y;
    scanf("%d%d", &x, &y);
    cout << min(x, y) << ' ' << max(x, y) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}