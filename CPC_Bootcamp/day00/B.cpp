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
    int n, m;
    cin >> n;
    int i = 0;
    vector<int> x;
    vector<int> v(n);
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    cin >> m;
    vector<int> a(m);
    i = 0;
    while (i < m)
    {
        cin >> a[i];
        i++;
    }
    i = 0;
    int f = 0;
    while (i < n)
    {
        if (find(a.begin(), a.end(), v[i]) == a.end())
        {
            x.push_back(v[i]);
        }
        i++;
    }
    i = 0;
    cout << x.size() << endl;
    while (i < x.size())
    {
        cout << x[i];
        if (i != x.size() - 1)
            cout << " ";
        i++;
    }
    cout << endl;
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
        solution();
    return (0);
}