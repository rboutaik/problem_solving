#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, n, a, x;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d", &n);
        a = 0;
        while (a < 10)
        {
            if (a % 2 == 0)
            {
                if ((n + 1) % 3 == 0)
                {
                    printf("First\n");
                    break;
                }
            }
            else if ((n + 1) % 3 == 0)
            {
                printf("Second\n");
                break;
            }
            n--;
            a++;
        }
        if (a == 10)
            printf("Second\n");
         t--;
    }

}