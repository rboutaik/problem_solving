#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define ll long long
#define ull unsigned long long

using namespace std;

vector<ll> tab(2e5 + 2);

void    solution()
{
    ll  n;
    cin >> n;
    vector<ll> v(n);
    ll i = 0, res = 0;
    while (i < n)
    {
        cin >>v[i];
        if (i == 0)
            tab[i] = v[i];
        else
            tab[i] = tab[i - 1] + v[i];
        i++;
    }
    string s;
    cin >> s;
    ll j =  n - 1;
    i = 0;
    while (1)
    {
        while (s[i] && s[i] != 'L')
            i++;
        while (j >= 0 && s[j] != 'R')
            j--;
        if (i >= j)
            break ;
        if (s[i] == 'L' && s[j] == 'R')
        {
            if (i - 1 >= 0)
                res += tab[j] - tab[i - 1];
            else
                res += tab[j];
            s[i] = '.';
            s[j] = '.';
        }
        i++;
        j--;
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