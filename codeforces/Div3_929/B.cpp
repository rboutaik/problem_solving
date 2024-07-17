#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n, s, m, f;
    cin >> t;
    while (t--) {
        s = m = f = 0;
        cin >> n;
    	vector<int> tab(n);
        for (int i = 0; i < n; ++i) {
            cin >> tab[i];
            s += tab[i];
        }
		if (s % 3 == 0)
		{
			cout << m << endl;
			continue ;
		}
        sort(tab.begin(), tab.end());
        for (int i = 0; i < n; i++)
        {
            if ( (s - tab[i]) % 3 == 0 || (s + 1 ) % 3 == 0)
            {
                m++;
				f = 1;
                break ;
            }
        }
		if (f == 0)
		{
			for (int i = 0; i < n; i++)
			{
				if ((s - tab[i] + 1) % 3 == 0)
				{
					m += 2;
					break ;
				}
			}
		}
        cout << m << endl;
    }
    return 0;
}
