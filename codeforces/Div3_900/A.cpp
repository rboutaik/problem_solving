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
	int n, k, a, bol = 0;
	cin >> n >> k;
	while (n--)
	{
		cin >> a;
		if (a == k)
			bol = 1;
	}
	if (bol)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}