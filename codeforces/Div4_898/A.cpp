#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define ll long long

using namespace std;

void    solution()
{
	string s;
	cin >> s;
	if ((s[0] == 'a' && s[1] == 'b') || (s[0] == 'b' && s[1] == 'a') || (s[0] == 'a' && s[1] == 'c') || (s[0] == 'c' && s[1] == 'b') )
		cout << "YES\n";
	else
		cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}