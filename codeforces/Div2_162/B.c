#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int check_death(long arr[],long n)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] == 0)
            return (1);
        i++;
    }
    return (0);
}

int check_enemy_death(long arr[],long n)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] > 0)
            return (0);
        i++;
    }
    return (1);
}

int main()
{
    long t, n, k, res, i, j;
    scanf("%ld", &t);
    while (t--)
    {
        scanf("%ld%ld", &n, &k);
        i = 0;
        long points[n], life[n], bull;
        while (i < n)
        {
            scanf("%ld", &life[i]);
            i++;
        }
        i = 0;
        while (i < n)
        {
            scanf("%ld", &points[i]);
            i++;
        }
        i = 0;
        while (i < n)
        {
            bull = k;
            j = 0;
            while (bull && j < n)
            {
                if (life[j] == 0)
                    j++;
                if (j == n)
                    break ;
                if (bull >= life[j])
                {
                    bull = bull - life[j];
                    life[j] = 0;
                }
                else
                {
                    life[j] = life[j] - bull;
                    bull = 0;
                }
                j++;
            }
            j = 0;
            while (j < n)
            {
                if (points[j] > 0 && life[j] != 0)
                    points[j]--;
                else if (points[j] < 0 && life[j] != 0)
                    points[j]++;
                j++;
            }
            if (check_death(points, n) || check_enemy_death(life, n))
            {
                break ;
            }
            i++;
        }
        if (check_death(points, n))
        {
                printf("NO\n");
        }
        else if (check_enemy_death(life, n))
        {
                printf("YES\n");
        }
    }
    return (0);
}