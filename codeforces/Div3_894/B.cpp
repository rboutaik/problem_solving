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
	ll n;
	cin >> n;
	vector<ll> v(n);
	vector<ll> m;
	for (int i = 0; i < n; i++)
		cin >> v[i];
	ll	i = 1;
	m.push_back(v[0]);
	while (i < n)
	{
		if (v[i] >= v[i - 1])
			m.push_back(v[i]);
		else
		{
			
			m.push_back(v[i]);
			m.push_back(v[i]);
		}
		i++;
	}
	cout << m.size() << endl;
	for (ll i = 0; i < m.size(); i++)
	{
		cout << m[i];
		if (i != m.size() - 1)
			cout << ' ';
	}
	cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}