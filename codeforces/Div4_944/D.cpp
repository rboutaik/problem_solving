#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define ll long long
#define ull unsigned long long

using namespace std;

int get_next(string s, int i)
{
    while (s[i] && s[i] == 48)
        i++;
    return (s[i]);
}

void    solution()
{
    string s;
    int res = 1, i = 0, flag = 0;
    cin >> s;
    while (s[i] && s[i] == 48)
        i++;
    if (s[i] && s[i] == 49 && i != 0)
        flag = 1;
    while (s[i] && s[i] == 49)
    {
        i++;
    }
    while (s[i])
    {
        if (s[i] == 48 && get_next(s, i) == 49 && flag == 0)
        {
            while (s[i] && s[i] == 48)
                i++;
            res++;
            flag = 1;
            while (s[i] && s[i] == 49)
                i++;
        }
        if (s[i] && s[i] == 48)
        {
            res++;
            while (s[i] && s[i] == 48)
                i++;
        }
         if (s[i] && s[i] == 49)
        {
            res++;
            while (s[i] && s[i] == 49)
                i++;
        }
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}