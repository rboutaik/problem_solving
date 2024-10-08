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
    int i = 0;
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    int k ,q; cin >> k;
    int mid, l, r;
    i = 0;
    while (i < k)
    {
        cin >> q;
        int res = 0;
        l = 0; r = n - 1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] == q)
            {
                res = 1;
                break ;
            }
            if (v[mid] < q)
                l = mid + 1;
            else
                r = mid - 1;
        }
        cout << res << endl;
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