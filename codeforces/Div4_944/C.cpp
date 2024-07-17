#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define ll long long
#define ull unsigned long long

using namespace std;

char    find_it(int a, int b, int c)
{
    while (a != b)
    {
        if (a == c)
            return ('l');
        else
            a--;
        if (a == 0)
            a = 12;
    }
    return ('r');
}

void    solution()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    char c1, c2;
    c1 = find_it(a, b, c);
    c2 = find_it(a, b, d);
    if (c1 != c2)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}