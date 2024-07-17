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
    string s1, s2;
	ssize_t  res;
	cin >> s1 >> s2;
	int	i = 0, len = 0;
	int		err = 0;
	while (s1[i])
	{
		if (s1[i] > s2[i] && !(s2[i] == 'a' && s1[i] == 'z'))
		{
			err = 1;
			break ;
		}
		len += s2[i] - s1[i] + 1;
		i++;
	}
	if (err == 1)
		res = -1;
	else if (i == 1)
		res = 1;
	else
		res = (len) % (1000000007);
	cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    solution();
    return (0);
}