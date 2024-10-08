#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <string>
#include <stack>
#define ll long long
#define ull unsigned long long
# define endl '\n'

using namespace std;


float	calc_dis(float x, float y, float x1, float y1)
{
	return (((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y)));
}

void    solution()
{
	int x, y, k; cin >> x >> y >> k;

	vector<vector<char> > v(x, vector<char>(y));

	vector<pair<int, int> > shifts;
	map<char, vector< pair<int, int> > > mp;

	for (int i = 0; i < x; i++)
	{
	  for (int j = 0; j < y; j++)
	  {
		cin >> v[i][j];
		if (isupper(v[i][j]))
			shifts.push_back(make_pair(i, j));
		mp[v[i][j]].push_back(make_pair(i + 1, j + 1));
	  }
	}

	int q; cin >> q;
	char c;
	int res = 0;
	int flag = 0;
	int shift_size = shifts.size();
	for (int a = 0; a < q ; a++)
	{
		cin >> c;

		if (mp[tolower(c)].size() == 0)
			flag = 1;
		if (isupper(c))
		{
			c = tolower(c);
			if (shift_size == 0)
				flag = 1;
			else
			{
				int f = 0;
				for (auto it : shifts)
				{
					for (auto mpp : mp[c])
					{
						if ((float)calc_dis(it.first, it.second, mpp.first - 1, mpp.second - 1) * 1.0 <= (float)k * k * 1.0)
						{
							f = 1;
							break ;
						}
					}
					if (f == 1)
						break ;
				}
				if (f == 0)
					res++;
			}
		}
	}


	if (flag == 1)
		cout << "-1\n";
	else
		cout << res << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	// cin >> t;
	while (t--)
	  solution();
	return (0);
}