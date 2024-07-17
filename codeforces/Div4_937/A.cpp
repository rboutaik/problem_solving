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
	int	a, b, c;
	cin >> a >> b >> c;
	if (a < b && b < c)
		cout << "STAIR" << endl;
	else if (a < b && c < b)
		cout << "PEAK" << endl;
	else
		cout << "NONE" << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}