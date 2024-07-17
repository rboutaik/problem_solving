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
	ll	n, k, a, res = 1e5;
	cin >> n >> k;
	while (n--)
	{
		cin >> a;
		ll x = a/k;
		if (a % k)
		{
			x++;
			x = (k * (x)) - a;
		}
		else
			x = 0;

		if (a > k)
			res = min(res, x);
		else
			res = min(res, k - a);

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