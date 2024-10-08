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
    int n;
    cin >> n;
    int i = 0, k;
    while (i < n)
    {
        cin >> k;
        if (k >= 0)
            cout << k + 2;
        else
            cout << k;
        if (i != n - 1)
            cout << " ";
        i++;
    }
    cout << "\n";
    
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
        solution();
    return (0);
}