#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define ll long long
#define ull unsigned long long

using namespace std;

void    solution()
{
    int n;
    string a, b;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        cin >> a;
        cin >> b;
        cout << b[0] << a[1] << a[2] << " " << a[0] << b[1] << b[2] << endl;
        i++;
    }
}

int main()
{

        solution();
    return (0);
}