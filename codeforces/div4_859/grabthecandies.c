#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, n,k,m,b;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d", &n);
        m = 0;
        b  = 0;
        while (n > 0)
        {
            scanf("%d", &k);
            if (k % 2 == 0)
                m += k;
            else
                b += k;
            n--;
        }
        if (m > b)
            printf("YES\n");
        else
            printf("NO\n");
        t--;
    }

}