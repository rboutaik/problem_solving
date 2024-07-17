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
    ll n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    int i = 0, znb = 0;
    int res = 0;
    while (s[i])
    {
        if (s[i] == '0')
        {
            znb = 0;
            int j = i;
            while (s[j] && s[j] == '0')
            {
                znb++;
                j++;
                if (znb == k)
                {
                    res++;
                    break ;
                }
            }
        }
        i++;
    }
    cout << res << endl;
}

int main()
{

        solution();
    return (0);
}