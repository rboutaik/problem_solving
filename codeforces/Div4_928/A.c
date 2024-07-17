#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, a, b, i;
    char    s[6];
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%s", s);
        a = b = i = 0;
        while (s[i])
        {
            if (s[i] == 'A')
                a++;
            else
                b++;
            i++;
        }
        if (a > b)
            printf("A\n");
        else
            printf("B\n");
        t--;
    }
    return (0);
}