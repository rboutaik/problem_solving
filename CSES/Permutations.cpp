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
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return ;
    }
    if (n == 4)
    {
        cout << "2 4 1 3" << endl;
        return ;
    }
    int i = 1;
    cout << i;
    i = 3;
    while (i <= n)
    {
        cout << " "<< i;
        i+=2;
    }
    i = 2;
    while (i <= n)
    {
        cout << " "<< i;
        i+=2;
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