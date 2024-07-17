#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d%d%d", &a, &b, &c);
        if (a + b == c)
            printf("+\n");
        else
            printf("-\n");
        t--;
    }
}