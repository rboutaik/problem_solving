#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, i, n, a, b, h = 0;
    char    *k, *g;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d", &n);
        char    s[n + 1];
        while (n > 0)
        {
            scanf("%s", s);
            k = strchr(s, '1');
            if (k != NULL && h == 0)
            {
                h = 1;
                a = k - s;
                scanf("%s", s);
                g = strchr(s, '1');
                n--;
                b = g - s;
                if (a != b)
                {
                    printf("TRIANGLE\n");
                }
                else
                {
                    printf("SQUARE\n");
                }
            }
            n--;
        }
        h = 0;
        t--;
    }
    return (0);
}