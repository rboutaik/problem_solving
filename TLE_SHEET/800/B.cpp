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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    int i = 0, res = 0, max_res = 0, j = 0;
    while (i < n)
    {
        cin >> v[i];
        i++;
    }
    i = 0;
    while (i < x)
    {
        i++;
        res++;
        max_res = res >= max_res ? res : max_res;
        if (v[j] == i)
            res = 0, j++;
    }
    i = x;
    j = n - 1;
    while (i > 0)
    {
        i--;
        res++;
        max_res = res >= max_res ? res : max_res;
        if (v[j] == i)
            res = 0, j--;
    }
    cout << max_res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}