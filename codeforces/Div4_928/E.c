#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, n, k, first, i, res;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d%d", &n, &k);
        i = 1;
        first = 1;
        res = 1;
        while (i < k)
        {
            if (res >= n)
                res = ++first;
            else
                res += 2;
            i++;
        }
        printf("%d\n", res);
        t--;
    }
    return (0);
}