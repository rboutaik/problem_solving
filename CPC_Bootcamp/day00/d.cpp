#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <stack>
#define ll long long
#define ull unsigned long long

using namespace std;

void    solution()
{
    ll t;
    cin >> t;
    ll n, x;
    vector<ll> v;
    ll q = 0, ss;

    ss = 0;
    while (t--)
    {
        cin >> n;

        if (n == 1)
        {
            scanf("%lld", &x);
            v.push_back(x);
            q++;
            ss++;
        }
        else if (n == 2)
        {
            if (ss > 0)
            {
                q--;
                ss--;
            }
        }
        else
        {
            if (ss == 0)
                cout << "Empty!\n";
            else
            {
                 cout << v[q - 1] << endl;

            }
        }
    }   
    
}

int main()
{
        solution();
    return (0);
}