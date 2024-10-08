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
#define endl '\n'

using namespace std;

void solution()
{
    int n, k, total = 0; cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v) cin >> i, total += i;
    
    int i = 0;
    int l = 0, r = 1 , sum = v[l] + v[r], ans = 1e8;
    if (total == k)
    {
        cout << "0\n";
        return ;
    }
    if (total < k)
    {
        cout << "-1\n";
        return ;
    }
    while (r < n)
    {
        if (sum == k)
            ans = min(ans, l + )
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
        solution();
    return 0;
}
