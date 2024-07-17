#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
   int  t, n, a, b, c;
   scanf("%d", &t);
   while (t--)
   {
        scanf("%d", &n);
        a = b = c = 1;
        while (c <26 && c < n - 2)
            c++;
        while (b <26 && (b + c )< n - 1)
            b++;
        while (a <26 && (a + b + c) < n)
            a++;
        printf("%c%c%c\n", a + 96, b + 96, c + 96);
   }
   return (0);
}