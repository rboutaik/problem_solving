#include <stdio.h>
#include <string.h>

int main()
{
    int t, a, b, c, i;
    char *tmp;
    scanf("%d", &t);
    char s1[4], s2[4], s3[4];
    while (t > 0)
    {
        scanf("%s%s%s", s1, s2, s3);
        a = b = c = 0;
        i =0;
        while (s1[i])
        {
            if (s1[i] == 'A')
                a++;
            else if (s1[i] == 'B')
                b++;
            else if (s1[i] == 'C')
                c++;
            if (s2[i] == 'A')
                a++;
            else if (s2[i] == 'B')
                b++;
            else if (s2[i] == 'C')
                c++;
            if (s3[i] == 'A')
                a++;
            else if (s3[i] == 'B')
                b++;
            else if (s3[i] == 'C')
                c++;
            i++;
        }
        if (a != 3)
            printf("A\n");
        if (b != 3)
            printf("B\n");
        if (c != 3)
            printf("C\n");
        t--;
    }
}