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

bool is_equal(vector<int>& v, vector<int>& t)
{
    int i = 0;

    while (i < v.size())
    {
        if (v[i] != t[i])
            return (0);
        i++;
    }
    return (1);
}


void    solution()
{
    int n; cin >> n;

    int i = 0;
    vector<int> v(n), t(n);
    while (i < n)
    {
        cin >> v[i];
        t[i] = v[i];
        i++;
    }

    sort(t.begin(), t.end());

    int l = 0, r = n - 1;
    while (l < n && v[l] == t[l])
        l++;
    while (r >= 0 && v[r] == t[r])
        r--;

    if (l >= r)
    {
        cout << "yes" << endl;

        cout << "1 1" << endl;
    }
    else
    {
        reverse(v.begin() + l, v.begin() + r + 1);
        if (is_equal(v, t))
        {
            cout << "yes\n";
            cout << l + 1 << " " << r + 1 << endl;
        }
        else
            cout << "no\n";
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