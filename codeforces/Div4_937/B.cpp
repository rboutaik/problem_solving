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
	int	n;
	cin >> n;
	int i = 0,j = 0;
	int b = 0;
	if (n == 1)
	{
		cout << "##\n##\n";
		return ;
	}
	while (i < 2 * n)
	{
		j = 0;
		while (j < 2 * n)
		{
			if (b == 0)
			{
				cout << "##";
				b = 1;
			}
			else
			{
				cout << "..";
				b = 0;
			}
			j += 2;
			if (j == 2 * n)
			{
				if (n % 2 == 0)
				{
					if (i % 2 == 0)
						b = b;
					else
					{
						b = !b;
					}
				}
				else if (n % 2 != 0)
				{
					if (i % 2 == 0)
						b = !b;
					else
					{
						b = b;
					}
				}
			}
		}
		cout << '\n';
		i++;
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