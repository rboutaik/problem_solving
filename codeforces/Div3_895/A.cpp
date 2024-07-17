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
	double a ,b, c, res = 0,mx;
	cin >> a >> b >> c;
	mx = max(a, b);
	if (a != mx)
	{
		b = a;
		a = mx;
	}
	while (a != b)
	{
		if (a - c >= b + c)
		{
			a -= c;
			b += c;
		}
		else
		{
			mx = (a - b) / 2;
			a -= mx;
			b += mx;
		}
		res++;
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