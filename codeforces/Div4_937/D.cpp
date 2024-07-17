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
	ll n;
	cin >> n;
	if ((n >= 101 * 11 && n % 101 == 0 && n % 11 == 0 ) || n == 1)
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