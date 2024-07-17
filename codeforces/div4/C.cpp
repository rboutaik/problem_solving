#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

void    solution()
{
    string s;
    for (int i = 0; i < 8; i++)
    {

        cin >> s;
        int j = 0;
        while (s[j])
        {
            if (s[j] >= 97 && s[j] <= 122)
                cout << s[j];
            j++;
        }   
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}