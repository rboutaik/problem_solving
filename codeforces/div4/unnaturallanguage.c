#include <stdio.h>
#include <string.h>
#include <math.h>

int cvc(char  *s, int i, int n)
{
    if (i != 0 && strchr("ae", s[i]) && strchr("bcd", s[i - 1]) && strchr("bcd", s[i + 1]) && i < n)
        return (1);
    return (0);
}

int cv(char  *s, int i, int n)
{
    if (i != 0 && strchr("ae", s[i]) && strchr("bcd", s[i - 1]) && i < n)
        return (1);
    return (0);
}

int main()
{
    int t, n, i;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d", &n);
        char    s[n + 1];
        scanf("%s", s);
       i = 0; 
        while (s[i])
        {
                if (cvc(s, i, n) && (cv(s, i + 3, n) || cvc(s, i + 3, n)))
                    printf("%c%c.", s[i], s[i + 1]), i+= 2;
                else if (cv(s, i, n) && (cvc(s, i + 2, n) || cv(s, i + 2, n)))
                    printf("%c.", s[i]), i++;
                else
                    printf("%c", s[i++]);
        }
        printf("\n");
        t--;
    }
}