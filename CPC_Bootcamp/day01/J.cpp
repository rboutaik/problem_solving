#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <stack>
#define ll long long
#define ull unsigned long long
# define endl '\n'

using namespace std;


void    solution()
{
    int n; cin >> n;
    vector<int> v(n);
    vector<vector<int> > tab(5001, vector<int>(3));
    for (auto &i:v) cin >> i;
    int i = 0, k = 1, j = 0, l = 0;
    while (i < n)
    {
        j = 0;
        while (j < 3)
        {
            vector<int>::iterator it = find(v.begin(), v.end(), j + 1);
            if (it != v.end())
            {
                tab[l][j] = it - v.begin() + 1;
                *it = 0;
            }
            else
                break;
            j++;
        }
        l++;
        i++;
    }
    i = 0;
    j = 0;
    int sz = 0;
    i = 0;
    while (i < tab.size())
    {
        if (tab[i][0] != 0 && tab[i][1] != 0 && tab[i][2] != 0)
            sz++;
        i++;
    }
    i = 0;
    if (sz == 0)
    {
        cout << "0\n";
        return ;
    }
    cout << sz << endl;
    while (i < sz)
    {
        j = 0;
        while (j < tab[i].size())
        {
            cout << tab[i][j];
            cout << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
      solution();
    return (0);
}