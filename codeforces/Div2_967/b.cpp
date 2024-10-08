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
    ll  n;
    cin >> n;
    vector<ll> v(n + 1);
    if (n % 2 == 0)
        cout << "-1\n";
    else
    {
        ll  i = 1, j = n, k = 1;
        while (i <= j)
        {
            v[i] = k++;
            if (i != j)
                v[j] = k++;
            i++;
            j--;
        }
        i = 1;
        while (i <= n)
        {
            cout << v[i];
            if (i != n)
                cout << " ";
            i++;
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}