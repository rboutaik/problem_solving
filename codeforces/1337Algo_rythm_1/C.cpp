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
    int n,m;
    int i = 1;
    int tab[100001] = {0};
    int x;
    cin >> n >> m;
    i = 0;
    int a;
    int h = 0;
    int f = 0;
    while (h < m)
    {
        cin >> x;
        i = 0;
        while (i < x)
        {
            cin >> a;
            tab[a]++;
            i++;
        }
        h++;
    }
    int g = 1;
    while (g <= n)
    {
        if (f == 0)
        {
            cout << m - tab[g];
            f = 1;
        }
        else  
            cout << " " << m - tab[g];
        g++;
    }
}

int main()
{

        solution();
    return (0);
}