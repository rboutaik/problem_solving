#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, n, i, res, j, d;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int tab[n], ones = 0;
        i = 0;
        while (i < n)
        {
            scanf("%d", &tab[i]);
            if (tab[i] == 1)
                ones++;
            i++;
        }
        if (ones == n)
        {
            printf("0\n");
        }
        else
        {
            res = 0;
            i = n - 1;
            d = 0;
            while (tab[d] == 0)
                d++;
            while (i >= d)
            {
                if (tab[i] == 1)
                {
                    tab[i] = 0;
                    i--;
                    j = i;
                    while (tab[i] == 1 && i > d)
                        i--;
                    if (tab[i] == 0 && i > d)
                    {
                        tab[i] = 1;
                        res++;
                    }
                    i = j;
                }
                else
                    i--;
            }
            printf("%d\n", res);
        }
    }
    return (0);
}