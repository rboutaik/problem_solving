#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define ll long long
#define ull unsigned long long

using namespace std;

// void    fff(char **s, int x, int y, int *a, int *b, int i, int j)
// {
//     if (i >= x || j >= y || j < 0 || i < 0 || s[i][j] == 'a')
//         return ;
//     printf("[%d] [%d]\n", i, j);
//     if (s[i][j] == 'M')
//     {
//         if (i >= *a && j >= *b)
//         {
//             *a = i;
//             *b = j;
//         }
//     }
//     if (s[i][j] == '#')
//         return ;
//     s[i][j] = 'a';
//     fff(s, x, y, a, b, i, j + 1);
//     fff(s, x, y, a, b, i, j - 1);
//     fff(s, x, y, a, b, i + 1, j);
//     fff(s, x, y, a, b, i - 1, j + 1);
// }

void    solution()
{
    int x, y;
    cin >> x >> y;
    string s;
    int i = 0, j = 0;
    int a = -1, b = -1;
    size_t f;
    while (i < x)
    {
        j = 0;
        cin >> s;
    int g = 0;
    j = 0;
    while (g < x)
    {
        f = s.find('M');
        if (f != string::npos)
        {
            if (f - 1 >= 0 && s[f - 1] != '#')
            {
                g++;
                continue;
            }

            if (g + 1 >= a && g + 1 > b)
            {
                a = g + 1;
                b = f + 1;
            }
        }
        g++;
    }
        i++;
    }
    if (a == -1)
        cout << "Nasser should pray at home";
    else
        cout << a << " " << b;

}

int main()
{

        solution();
    return (0);
}