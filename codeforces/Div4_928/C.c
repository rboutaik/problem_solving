#include <stdio.h>
#include <string.h>
#include <math.h>

int sod(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return (s);
}

int main()
{
    int t, n, s, tab[200001];
    int i = 1;
    tab[0] = 0;
    while (i < 200001)
    {
        tab[i] = sod(i) + tab[i - 1];
        i++;
    }
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d", &n);
        printf("%d\n", tab[n]);
        t--;
    }
    return (0);
}