#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <string>
#include <stack>
#define ll long long
#define ull unsigned long long
# define endl '\n'

using namespace std;

void    solution()
{
    int n, m, k; cin >> n >> m >> k;

    vector<vector<int> > v(n, vector<int> (m));
    vector<int> rowc(n);
    vector<int> colc(m);
    vector<int> rowp(n, -1);
    vector<int> colp(m, -1);


    int i = 0;
    int f, x, c, j;
    while (i < k)
    {
        cin >> f >> x >> c;
        x--;
        if (f == 2)
        {
            colp[x] = i;
            colc[x] = c;
        }
        if (f == 1)
        {
            rowp[x] = i;
            rowc[x] = c;
        }
        i++;
    }
    i = j = 0;
    while (i < n)
    {
        j = 0;
        while (j < m)
        {
            if (colp[j] > rowp[i])
                cout << colc[j];
            else
                cout << rowc[i];

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