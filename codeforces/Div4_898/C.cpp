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
    ll	n, idx, res = 0;
	string s;
	n = 0;
	while (n < 10)
	{
		cin >> s;
		while (1)
		{
			idx = s.find('X');
			s[idx] = '.';
			if (idx != string::npos)
			{
				if ((n == 0 || n == 9) || (idx == 0 || idx == 9 ))
				res += 1;
				else if ((n == 1 || n == 8) || (idx == 1 || idx == 8))
					res += 2;
				else if ((n == 2 || n == 7) || (idx == 2 || idx == 7))
					res += 3;
				else if ((n == 3 || n == 6) || (idx == 3 || idx == 6))
					res += 4;
				else if ((n == 4 || n == 5) || (idx == 4 || idx == 5))
					res += 5;
				else if ((n == 5 || n == 4) || (idx == 5 || idx == 4))
					res += 5;
			}
			else
				break ;
		}
		n++;
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