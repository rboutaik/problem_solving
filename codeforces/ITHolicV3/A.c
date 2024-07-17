#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
   int  t, n, i, q, a, j;
   scanf("%d", &t);
   while (t--)
   {
        scanf("%d", &n);
        char tab[n + 1];
        i = 0;
        a = q = 0;
        scanf("%s", tab);
        i = 0;
         while (i < n - 1)
        {
            if (tab[i] == 'Q')
            {
                j = i + 1;
                while (j < n)
                {
                    if (tab[j] == 'A')
                    {
                        tab[i] = '.';
                        tab[j] = '.';
                        break ;
                    }
                    j++;
                }
            }
            i++;
        }
        
        if (strchr(tab, 'Q') != NULL)
            printf("NO\n");
        else
            printf("YES\n");

   }
   return (0);
}