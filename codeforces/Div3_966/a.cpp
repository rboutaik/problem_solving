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
    string s;
    cin >> s;

    if (s.length() < 3)
    {
        cout << "NO\n";
        return ;
    }
    
    if (s[0] == '1' && s[1] == '0' && ((s[2] - 48) >= 2 || (s[2] != '0' && s[3])))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}