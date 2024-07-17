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
    string s;
	char	c;
	cin >> s;
	for (int i = 1; i < 9 ; i++)
	{
		c = 'a' + i - 1;
		if (i != s[1] - 48)
			cout << s[0] << i << endl;
		if (c != s[0])
			cout << c << s[1] <<endl;
	}
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}