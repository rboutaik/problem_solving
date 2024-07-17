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
	ll	i = 0, res;
	cin >> n;
	vector<ll> v(n);
	while (i < n)
		cin >> v[i++];
	res = v[0];
	i = 1;
	while (i < n)
	{
		if (v[i] < res)
		{
			res++;
			while (res % v[i] != 0)
				res = ((res / v[i]) + 1) * v[i];
		}
		else if (v[i] == res)
		{
			res = res + v[i];
		}
		else
		{
			while (res % v[i] != 0)
				res = ((res / v[i]) + 1) * v[i];
		}
		i++;
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