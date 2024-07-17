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
    int n;
    cin >> n;
    int i = 1, sum, x = 2, res = 0 ,h = 0, max = 0;
    sum = 2;
    while (sum <= n)
    {
        x = sum;
        h = 0;
        i = 1;
        while (1)
        {
            h += i * sum;
            i++;
            x++;
            if (i * sum > n)
                break ;

        }
        if (h > max)
        {
            max = h;
            res = sum;
        }
        sum++;
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