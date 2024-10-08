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
    string s, t;
    cin >> s;
    cin >> t;

    int i = 0;
    int k = 0;
    while (s[i])
    {
        if (s[i] == '?')
        {
            if (k < t.length())
                s[i] = t[k];
            else
                s[i] = 'a';
        }
        if (s[i] == t[k])
            k++;
        i++;
    }
    if (k == t.length())
    {

        cout << "YES\n" << s << endl;
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