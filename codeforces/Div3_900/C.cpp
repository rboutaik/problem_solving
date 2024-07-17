#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define ll long long
#define ull unsigned long long

using namespace std;

ll	sum(ll n)
{
	return ((n * (n + 1))/2);
}

void    solution()
{
	ll	n, k, x;
	cin >> n >> k >> x;
	if (x >= sum(k) && x <= sum(n) - sum(n - k))
		cout << "YES\n";
	else
		cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}