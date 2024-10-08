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
    int n; cin >> n;
    string s;
    vector<int> v(n);
    int i = 0;
    while (i < n)
    {
        cin >> s;
        v[i] = s.find('#') + 1;
        i++;
    }
    i = n - 1;
    while (i >= 0)
    {
        cout << v[i];
        if (i != 0)
            cout << " ";
        i--;
    }
    cout << endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
      solution();
    return (0);
}