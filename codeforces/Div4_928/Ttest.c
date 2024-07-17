#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t,n, i;
    scanf("%d%d",&n, &t);
    i = 0;
    if (n == 1 && t == 10)
    {
        printf("-1");
        return (0);
    }
    if (n == 1)
    {
        printf("%d", t);
        return (0);
    }
    
    if (t == 2 || t == 5 || t == 10)
    {
        printf("1");
        while (i++ < n - 1)
            printf("0");
    }
    else if (t == 3 || t == 6 || t == 9)
    {
        printf("1");
        while (i++ < n - 2)
            printf("0");
        printf("8");
    }
    else if (t == 4 || t == 8)
    {

        if (n == 2)
            printf("80");
        else if (n == 3)
        {
            printf("800");
        }
        else
        {
            printf("1");
            while (i++ < n - 1)
                printf("0");
        }
    }
    else if (t == 7)
    {
        if (n == 2)
            printf("21");
        else
        {
            printf("196");
            while (i++ < n - 3)
                printf("0");
        }
    }
    return (0);
}