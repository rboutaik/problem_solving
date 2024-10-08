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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int i = 0;
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    if (k == 1)
    {
        if (is_sorted(v.begin(), v.end()))
            cout << "YES\n";
        else
            cout << "NO\n";
        return ;
    }
    else
        cout << "YES\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}