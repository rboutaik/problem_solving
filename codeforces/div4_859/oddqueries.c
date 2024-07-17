#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int t, i, n, q, l, r;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d%d", &n, &q);
        size_t  arr[n], k, sum, x;
        i = 0;
        while (i < n)
        {
            scanf("%zu", &x);
            if (i == 0)
                arr[i] = x;
            else
                arr[i] = x + arr[i - 1];
            i++;
        }
        while (q > 0)
        {
            scanf("%d%d%zu", &l, &r, &k);
            i = 0;
            sum = 0;
            sum += k * (r - l + 1);
            sum += l != 1 ? arr[l - 2] : 0;
            sum += arr[n - 1] - arr[r - 1];
            if (sum % 2 != 0)
                printf("YES\n");
            else
                printf("NO\n");
            q--;
        }
        t--;
    }

}