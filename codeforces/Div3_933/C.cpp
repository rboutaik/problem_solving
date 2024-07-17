#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

void    solution()
{
    string s;
    int size, res, i;
    cin >> size;
    cin >> s;
    res = i = 0;
    while (i < size - 2)
    {
		if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')
		{
			s[i + 2] = '.';
			i += 2;
			res++;
		}
		else if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')
		{
			s[i] = '.';
			i += 2;
			res++;
		}
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