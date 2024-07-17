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
    int n, m, i, res = 0;
    char    tab[4] = {'v', 'i', 'k', 'a'};
    int idx = 0;
    cin >> n >> m;
    vector<string> v(n);
    i = 0;
    while(i < n)
        cin >> v[i++];
    int c = 0;
    while (c < m)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[j][c] == tab[idx])
            {
                res++;
                idx++;
                break ;
            }
        }
        if (idx >= 4)
            break ;
        c++;
    }
    if (res >= 4)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}