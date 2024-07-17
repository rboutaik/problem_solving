#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define ll long long
#define ull unsigned long long

using namespace std;

// int	gcd(ll a,ll b,ll c)
// {
// 	if (b % a == 0 && b / a != 1 && c %a == 0 )
// 		return a;
// 	else if (a% b == 0 && c % b == 0)
// 		return b;
// 	else if (a%c == 0 && b %c == 0)
// 		return c;
// 	return 0;
// }

// int getbt(ll a,ll b,ll c, ll max, ll min)
// {
// 		if (a != max && a != max)
// 		return a;
// 	if (b != max && b != max)
// 		return b;
// 	if (c != max && c != max)
// 		return c;
// 	return 0;
// }

void    solution()
{
	ll	a, b, c,max,miin, bol = 0;
	multiset<ll> v;
	cin >> a >> b >> c;
	if (a == b && b == c)
	{
		cout << "YES" << endl;
		return ;
	}
	v.insert(a);
	v.insert(b);
	v.insert(c);
	int	i = -1;
	
	while (++i < 3)
	{
		max = *max_element(v.begin(), v.end());
		miin = *min_element(v.begin(), v.end());
		v.erase(v.find(max));
		v.insert(max - miin);
		v.insert(miin);
		if (v.count(*v.begin()) == v.size())
		{
			bol = 1;
			break ;
		}
	}
	if (bol)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}