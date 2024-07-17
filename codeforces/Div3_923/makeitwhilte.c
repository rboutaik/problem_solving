#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t)
    {
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);
        printf("%ld\n", strrchr(s, 'B') - strchr(s, 'B') + 1);
        t--;
    }

}