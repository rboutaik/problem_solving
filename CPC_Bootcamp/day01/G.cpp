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

int is_palin(string s)
{
    int i = 0;
    while (i < s.size() / 2)
    {
        if (s[i] != s[s.size() - 1 - i])
            return (0);
        i++;
    }
    return (1);
}

int s_to_min(string s)
{
    int h, min;
    h = (s[0] - '0') * 10 + (s[1] - '0');
    h *= 60;
    min = (s[3] - '0') * 10 + (s[4] - '0');
    return (h + min);
}

string min_to_s(int n)
{
    string s;
    int h, m;
    h = n / 60;
    if (h >= 24)
        h = h - 24;
    if (h < 10)
        s += '0';
    s += to_string(h);
    s += ':';
    m = n % 60;
    if (m < 10)
        s += '0';
    s += to_string(m);
    return (s);
}

void    solution()
{
    string t;
    cin >> t;
    string n;
    string s;
    cin >> n;
    int res = 0;
    int time_s, nbr;
    int a;
    s = t;
    nbr = atoi(n.c_str());
    if (is_palin(t))
        res++;
    while (1)
    {
        a = s_to_min(t);
        a += nbr;
        t = min_to_s(a);
        if (t == s)
            break ;
        // cout << t << endl;
        if (is_palin(t))
            res++;
    }
    cout << res << endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
      solution();
    return (0);
}