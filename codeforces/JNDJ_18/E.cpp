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
	ll	x, id, t, ram, freeRam;
	set<ll, pair<ll, ll>> v1;
	vector<ll> v2;
	int t;
	cin >> t;
	int err = 0;
	int res = -1;
	while (t--)
	{
		vector<ll> vv;
		cin >> x;
		if (x == 1)
		{
			cin >> id >> t >> ram;
			v1.insert(1, {2, 3});
		}
		else if (x == 2)
		{
			cin >> freeRam;
			v2.push_back(freeRam);
		}
	}
	for (auto it1:v2)
	{
		for (auto it:v1)
		{
			if (it[2] <= it1)
			{

			}

		}
	}
	
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
        solution();
    return (0);
}