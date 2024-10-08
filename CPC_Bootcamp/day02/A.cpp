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
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (auto &i:v) cin >> i;
    int i = 0, mx = 0, curr = 0;
    while (i < n)
    {
        int j = 0;
        curr = 0;
        while (j < k && j + i < n)
        {
            curr += v[i + j];
            j++;
        }
        mx = max(mx, curr);
        i++;
    }
    cout << mx << endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
      solution();
    return (0);
}