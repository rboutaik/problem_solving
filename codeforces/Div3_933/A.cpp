#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

void    solution()
{
    vector<int> vl,vr;
	int leftcoins, rightcoins, maxcoins,i, j, res, input;
    cin >> leftcoins >> rightcoins >> maxcoins;
	i = 0;
	while (i < leftcoins)
	{
		cin >> input;
		vl.push_back(input);
		i++;
	}
	j = 0;
	while (j < rightcoins)
	{
		cin >> input;
		vr.push_back(input);
		j++;
	}
	i = j = res = 0;
	while (i < leftcoins)
	{
		j = 0;
		while (j < rightcoins)
		{
			if (vl[i] + vr[j] <= maxcoins)
				res++;
			j++;
		}
		i++;
	}
	cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solution();
    return (0);
}