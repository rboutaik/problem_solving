#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
   int  t, n, i;
   scanf("%d", &t);
   while (t--)
   {
        scanf("%d", &n);
        size_t  tab[n], avg, rest;
        i = 0;
        avg = 0;
        while (i < n)
        {
            scanf("%zu" ,&tab[i]);
            avg += tab[i];
            i++;
        }
        avg /= n;
        i = 0;
        rest = 0;
        while (i < n)
        {
            if (tab[i] + rest < avg)
            {
                printf("NO\n");
                break ;
            }
            if (tab[i] > avg)
            {
                rest += (tab[i] - avg);
                tab[i] = avg;
            }
            if (tab[i] < avg)
            {
                rest += tab[i];
                rest -= avg;
                tab[i] = avg;
            }
            if (i + 1 == n && tab[i] == avg && rest == 0)
            {
                printf("YES\n");
            }
            i++;
        }
   }
   return (0);
}