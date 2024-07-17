#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ft_abs(int n)
{
	if (n > 0)
		return n;
	else return -n;
}
int main()
{
	int n;
	scanf("%d", &n);
	int i = 0;
	while (i < n)
	{
		int nbr;
		scanf("%d", &nbr);
		int el;
		int j = 0;
		int k;
		int s1 = 0, s2 = -2147483648;
		int par, x = 0;
		scanf("%d", &el);
		s1 = el;
		par = el;
		int max = 0;
		while (j < nbr - 1)
		{
			scanf("%d", &el);
			if (el < 0 && el < max)
				max = el;
			if (ft_abs(el % 2) != ft_abs(par % 2))
				s1 += el;
			else
				s1 = el;
			if (s1 + max > s1)
				s2 = s1 + max;
			else if (s1 > s2)
				s2 = s1;
			par = el;
			j++;
		}
		printf("%d\n", s2);
		i++;
	}
}