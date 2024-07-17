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
    int l = 0, i = 0, u = 0;
    while (s[i])
    {
        if (isupper(s[i]))
            u++;
        else
            l++;
        i++;
    }
    if (l >= u)
    {
        transform(s.begin(), s.end(), s.begin(), 
              ::tolower); 
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), 
              ::toupper); 
    }
    cout << s;
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
        solution();
    return (0);
}