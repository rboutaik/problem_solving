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
    int x,y;
    cin >> x >> y;
    string s;
    int i = 0;
    int f = 0;
    int sum = 0;
    int first = 1;
    int a, b;
    while (i < x)
    {
        cin >> s;
        if (s.find('#') != string::npos)
        {
            if (first)
            {
                b = s.find('#') + 1;
                f = i;
                first = 0;

            }
            sum++;
        }
        i++;
    }
    a = ((sum + 1) / 2) + f;
    cout << a << " " << b << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}