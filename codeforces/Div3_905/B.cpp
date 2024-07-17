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
	int	n, k, res,sngl, dbl, istwo = 0;
	string s;
	char	tab[26] = {0};
	cin >> n >> k;
	cin >> s;
	int i = 0;
	while (s[i])
	{
		tab[s[i] - 97]++;
		i++;
	}
	i = 0;
	res = 0;
	sngl = dbl = 0;
	while (i < 26)
	{
		if (tab[i] % 2)
			sngl++;
		else
			dbl++;
		i++;
	}
	if (sngl > k + 1)
		cout << "NO\n";
	else
		cout << "YES" << endl;


}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}