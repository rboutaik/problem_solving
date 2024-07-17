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
	int	res = 0;
	int	tab[10] = {1, 2, 3, 4, 5, 6, 7, 8 ,9, 0};
	int	a, b, c, d;

	cin >> a;
	d = a % 10;
	a /= 10;
	c = a % 10;
	a /= 10;
	b = a % 10;
	a /= 10;

	int i= 0;
	while (1337)
	{
		if (tab[i] == a)
		{
			res++;
			break ;
		}
		else if (a == 0 || (tab[i] < a  && tab[i] != 0))
		{
			res++;
			i++;
		}
		else
		{
			res++;
			i--;
		}
	}
	while (1337)
	{
		if (tab[i] == b)
		{
			res++;
			break ;
		}
		else if (b == 0|| (tab[i] < b  && tab[i] != 0))
		{
			res++;
			i++;
		}
		else
		{
			res++;
			i--;
		}
	}
	while (1337)
	{
		if (tab[i] == c)
		{
			res++;
			break ;
		}
		else if (c == 0 || (tab[i] < c  && tab[i] != 0))
		{
			res++;
			i++;
		}
		else
		{
			res++;
			i--;
		}
	}
	while (1337)
	{
		if (tab[i] == d)
		{
			res++;
			break ;
		}
		else if (d == 0 || (tab[i] < d  && tab[i] != 0))
		{
			res++;
			i++;
		}
		else
		{
			res++;
			i--;
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