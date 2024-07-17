#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <unordered_set>
#define ll long long
#define ull unsigned long long

using namespace std;

void    solution()
{
    int n;
    cin >> n;
    ull x;
    unordered_set<ull> tab;
    // ull tab[n];
    ull pref[n];
    int res = 0;
    int i = 0;
    while (i < n)
    {
        cin >> x;
        tab.insert(x);
        if (i == 0)
            pref[0] = x;
        else
            pref[i] = pref[i - 1] + *next(tab.begin(), i);
        if (n == 1 && *tab.begin() != 0)
        {
            cout << "0" << endl;
            return ;
        }
        int j = 0;
        while (j <= i)
        {
            if (*next(tab.begin(), j) == pref[i] - *next(tab.begin(), j))
            {
                res++;
                break ;
            }
            j++;
        }
        i++;
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