#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int t, n,s, m, tmp;
    scanf("%d", &t);
    while (t--)
    {
        s = m = 0;
        scanf("%d", &n);
        int tab[n], i = 0;
        while (i < n)
        {
            scanf("%d", &tab[i]);
            s += tab[i];
        }
        
        printf("%d\n", m);
    }

    return 0;
}