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
    int n, a;
    vector<int> s;
    int i = 0;
    cin >> n;
    while (i < n)
    {
        cin >> a;
        s.push_back(a);
        i++;
    }
    sort(s.begin(), s.end());
    for (int j = 0; j < n ; j++)
    {
        cout << s[j];
        if (j != n - 1)
            cout << ' ';
    }

    
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
        solution();
    return (0);
}