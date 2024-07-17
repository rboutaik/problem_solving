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
	ll	n;
	cin >> n;
	vector<ll> v(n);
	v[0] = 1;
	v[1] = 3;
	for (int i = 2; i < n; i++)
	{
		int j = v[i - 1] + 2;
		while ((3 * j) % (v[i - 2] + v[i - 1]) == 0)
			j++;
		v[i] = j;
	}
	for (int i = 0; i < n ; i++)
	{
		cout << v[i];
		if (i != n - 1)
			cout << ' ';
	}
	cout << '\n';
	
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}