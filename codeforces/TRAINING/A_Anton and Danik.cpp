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
    int n, A = 0, D = 0;
    string s;
    int i = 0;
    cin >> n;
    cin >> s;
    while (s[i])
    {
        if (s[i] == 'A')
            A++;
        else
            D++;
        i++;
    }
    if (A > D)
        cout << "Anton" << endl;
    else if (A == D)
        cout << "Friendship" << endl;
    else
        cout << "Danik" << endl;
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
        solution();
    return (0);
}