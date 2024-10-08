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
    int a, b, c, d;
    int w = 0;

    cin >> a >> b >> c >> d;
    w += ((a > c) && (b > d)) || (a >= c && (b > d)) || (a > c && (b >= d));
    w += (b > c) && (a > d) || (b >= c) && (a > d) || (b > c) && (a >= d);
    w += (a > d) && (b > c) || (a >= d) && (b > c) || (a > d) && (b >= c);
    w += (b > d) && (a > c) || (b >= d) && (a > c) || (b > d) && (a >= c);
    cout << w << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}