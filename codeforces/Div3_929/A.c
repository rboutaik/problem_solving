#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int t, n, a,s;
    scanf("%d", &t);
    while (t--)
    {
        s = 0;
        scanf("%d", &n);
        while (n--)
        {
            scanf("%d", &a);
            s += abs(a);
        }
        printf("%d\n", s);
    }

    return 0;
}