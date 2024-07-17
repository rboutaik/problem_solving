#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define ll long long

using namespace std;

void    solution()
{
	ll n, a, res = 1, i = 0;
	cin >> n;
    multiset<ll> s;
	while (n--)
	{
		cin >> a;
		s.insert(a);
	}
	for (auto it = s.begin(); it != s.end() ; it++)
	{
		if (i == 0)
			res *= (*it + 1);
		else
			res *= *it;
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