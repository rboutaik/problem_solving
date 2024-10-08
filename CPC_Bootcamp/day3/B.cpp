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
    ll  n; cin >> n;
    ll i = 2, ans = 1;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            ans = 0;
            break ;
        }
        i++;
    }
    if (ans && n != 0 && n != 1)
        cout << "\"Prime\"\n";
    else
        cout << "\"Not Prime\"\n";

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
      solution();
    return (0);
}