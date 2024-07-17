#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t, a, b, l, k, x, y, res;
    long long d;
    cin >> t;
    while (t--) {
        k = x = y = 0;
        res = 0;
        cin >> a >> b >> l;
        while (k <= l)
        {
            x = 0;
            while (x <= sqrt(l))
            {
                y = 0;
                while (y <= sqrt(l))
                {
                    d = k * pow(a, x) * pow(b, y);
                    if (l == d)
                    {
                        res++;
                        break ;
                    }
                    if (d > l || d < 0)
                        break ;
                    y++;
                }
                x++;
            }
            k++;
        }
        cout << res << endl;
    }
    return 0;
}
