#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t, i, qmark, res;
    char s[6];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", s);
        res = 1;
        i = 0;
        if (s[0] == '0')
        {
            printf("0\n");
        }
        else if ((strchr(s, '?') == NULL && s[0] != '0'))
        {
            printf("1\n");
        }
        else
        {
            if (s[0] == '?')
                res *= 9;
            i = 1;
            while (s[i])
            {
                if (s[i] == '?')
                    res *= 10;
                i++;
            }
            printf("%d\n", res);
        }

    }
    return (0);
}