#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
   long      t, i;
   long   n, f, a, b;
   scanf("%ld", &t);
   while (t--)
   {
       scanf("%ld%ld%ld%ld", &n, &f, &a, &b);
       long   tab[n], sum;
       i = 0;
       sum = 0;
       while (i < n)
       {
        scanf("%ld", &tab[i]);
        i++;
       }
        i = 0;
        if ((tab[i] * a) <= b)
            f -= tab[i] * a;
        else
            f -= b;
        i = 1;
        while (i < n)
        {
            if (((tab[i] - tab[i - 1]) * a) <= b)
            {
                f -= a * (tab[i] - tab[i - 1]);
            }
            else
                f -= b;
            i++;
        }
        if (f <= 0)
            printf("NO\n");
        else
            printf("YES\n");
   }
   return (0);
}