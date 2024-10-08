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
    int t = 0;
    cin >> t;
    map<string, int> mp;
    string s;
    while (t--)
    {
        cin >> s;
        if (mp.find(s) != mp.end())
            mp[s]++;
        else
            mp[s] = 1;
    }
    int m = 0;
    for (auto it:mp)
    {
        if (it.second >= m)
        {
            m = it.second;
            s = it.first;
        }
    }
cout << s << " " << m << endl;

}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
        solution();
    return (0);
}