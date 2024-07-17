#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <sstream>
#define ll long long
#define ull unsigned long long

using namespace std;

void    solution()
{
	string s;
	
	cin >> s;
	s[2] = ' ';
	stringstream ss(s);
	string a, b;
	ss >> a;
	ss >> b;
	int h, m;
	h = stoi(a);
	m = stoi(b);
	if ( h == 0 || (h >= 13 && h <= 23))
	{
		if ((h + 12) % 24 < 10)
			cout << '0' << (h + 12) % 24 ;
		else
			cout << (h + 12) % 24;
	}
	else
	{
		cout << a;
	}
	cout << ':' << b;
	if (h >= 12 && h <= 23)
		cout << " PM" << endl;
	else
		cout << " AM" << endl;
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    //     solution();
	cout << 20000 << endl;
	for (int i = 0; i < 20000 ; i++)
	{
		cout << rand() % 100000 << endl;
	}
    return (0);
}