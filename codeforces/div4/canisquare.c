#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, n;
    size_t sum, a;
    scanf("%d", &t);
    while (t > 0)
    {
        sum = 0;
        scanf("%d", &n);
        while (n > 0)
        {
            scanf("%zu", &a);
            sum +=a;
            n--;
        }
        if ((double)sqrt(sum) == (long long)sqrt(sum))
            printf("YES\n");
        else
            printf("NO\n");
        t--;
    }
    return (0);
}