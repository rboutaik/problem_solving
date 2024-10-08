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
    int n, m, x;
    cin >> n >> m;
    int i = 0, res = 0;
    while (i < n)
    {
        cin >> x;
        if (x > m)
            res+=2;
        else
            res++;
        i++; 
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