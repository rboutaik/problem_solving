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
    int n;
    cin >> n;
    vector<int> v(n);
    int i = 0;
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    sort(v.begin(), v.end());
    i = 0;
    while (i < n)
    {
        cout << v[i];
        if (i != n - 1)
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