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
    int n, k; cin >> n >> k;

    int i = 97, j = 0;
    vector<int> v(k);
    while (j < k)
    {
        v[j] = i;
        i++;
        j++;
        if (i == 123)
            i = 97;
    }
    int h;
    i = 0, h = k;
    while (n)
    {
        char c = v[i];
        cout << c;
        i++;
        if (i == k)
            i = 0;
        h--;
        n--;
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t =1 ;
    // cin >> t;
    while (t--)
      solution();
    return (0);
}