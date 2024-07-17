#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

void    solution()
{
	int	n, i,res = 0;
	string s;
	cin >> n >> s;
	i = 0;
	while (s[i])
	{
		if (s[i] == '.')
			i++;
		else if (s[i] == '@')
		{
			i++;
			res++;
		}
		else if (s[i] == '*')
		{
			if (s[i + 1] == '*')
				break ;
			i++;
		}
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