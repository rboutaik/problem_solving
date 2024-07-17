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
    ll f,a;
    cin >> f >> a;
    if (f >= 10 && a >= 10)
    {
        if ((f + a) % 2 == 0)
            cout << "Flytoox\n";
        else
            cout << "Alex\n";
    }
    else
    {
        if ((f + a) % 4 == 0 || (f + a - 1) % 4 == 0)
            cout << "Flytoox\n";
        else
            cout << "Alex\n";
    }

}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
        solution();
    return (0);
}