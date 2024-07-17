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
	int	n, m, i, res = 0;
	string x;
	string s;
	cin >> n >> m;
	cin >> x >> s;
	i = -1;
	while (++i < 10)
	{
		if (x.find(s) != string::npos)
			break ;
		x += x;
		res++;
	}
	if (x.find(s) == string::npos)
		res = -1;
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