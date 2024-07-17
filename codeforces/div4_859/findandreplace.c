#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int flag, t, n, i, j;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);
        flag = 0;
        i = 0;

        while (i< n - 1)
        {
            j = i + 1;
            while (j < n)
            {
                if (s[i] == s[j] && ((i % 2 == 0 && j % 2 != 0) || (i % 2 != 0 && j % 2 == 0)))
                {
                    flag = 1;
                    break ;
                }
                j++;
            }
            if (flag == 1)
                break ;
            i++;
        }
        if (flag == 1)
            printf("NO\n");
        else
            printf("YES\n");
        t--;
    }

}