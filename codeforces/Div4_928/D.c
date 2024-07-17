#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, n, a;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d",&n);
        int tab[n], i = 0,q = 0;
        long x[2147483648] = {0};
        while (i < n)
        {
            scanf("%d", &tab[i]);
            i++;
        }
        i = 0;
        int j;
        while (i < n)
        {
            if (!x[tab[i]])
            {
                x[2147483647 - tab[i]]++;
                q++;
            }
            else
            {
                q--;
            }
            i++;
        }
        printf("%d\n", q);
        t--;
    }
    return (0);
}