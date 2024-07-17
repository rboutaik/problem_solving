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
    ll		n, k, i, j, res = 0;
    string	s;
	cin >> n >> k;
	cin >> s;
	i = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] == 'B')
		{
			j = 0;
			while (s[i + j] && j < k)
				s[i + j++] = 'W';
			res++;
		}
		if (j)
			i += j;
		else
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