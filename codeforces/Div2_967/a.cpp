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
    int n, k;
    cin >> n;
    vector<int> v(n + 1);
    int i = 0;

    while (i < n)
    {
        cin >> k;
        v[k]++;
        i++;
    }
    int res = *max_element(v.begin(), v.end());
    cout << n - res << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}