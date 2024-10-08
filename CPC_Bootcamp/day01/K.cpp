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
    map<int,int> mp;
    int i = 0;
    for (auto &i:v) cin >> i, mp[i]++;
    i = 0;
    int nbr = 0;
    while (i < 2e5)
    {
        if (mp[i] == 1)
            nbr++;
        if (mp[i] == 0 || nbr == 2)
        {
            cout << i << endl;
            return ;
        }
        i++;
    }
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