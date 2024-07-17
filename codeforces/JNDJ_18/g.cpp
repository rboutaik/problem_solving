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
	char c = 'A';
	int	L, P;
	cin >> L >> P;
	float per = 0;
	per = (P * L) / 100;
	cout << '[';
	int i = 0;
	while (i < L)
	{
		if (i >= per)
			cout << '-';
		else
			cout << c;
		if (c == 'A')
			c = 'z';
		else if (c == 'z')
			c = 'u';
		i++;
		if (i == per - 1 && per == L)
			c = 'z';
	}
	cout << ']' << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}