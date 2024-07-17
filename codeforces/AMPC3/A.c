#include <stdio.h>

int main() {
    size_t n, x, y, res = 0, cop = 0;
    scanf("%zu%zu%zu", &n, &x, &y);
    
    while (1) {
        if (n >= cop && (x * cop > y) && cop != 0)
        {
            n -= cop;
            res += y;
            cop *= 2;
        }
        else if (n < cop && x * n > y + (cop - n) * x && cop != 0)
        {
            res += y + (cop - n) * x;
            n = 0;
        }
         else {
            n -= 1;
            res += x;
            cop += 1;
        }
        if (n == 0)
            break ;
    }
    
    printf("%zu", res);
    return 0;
}
