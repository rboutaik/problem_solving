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
    int a, b;
    string s;
    cin >> s;
    cin >> a >> b;
    int i = 0;
    a--;
    b--;
    char c;
    int j = b;
    i =a;
    while (a < b)
    {
      c = s[a];
      s[a] = s[b];
      s[b] = c;
        a++;
        b--;
    }
    cout << s << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t;
    // cin >> t;
    // while (t--)
      solution();
    return (0);
}