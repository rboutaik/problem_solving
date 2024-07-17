#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

void    solution()
{
    int n, m, res = 1, idx = 0;
    string s;
    char v[4] = {'v', 'i', 'k', 'a'};
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[idx] != v[idx])
            res = 0;
        else
            idx++;
    }
    if (res)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}