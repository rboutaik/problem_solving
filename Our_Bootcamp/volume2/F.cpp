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


ull    fact(ull n)
{
    ull i = 2;
    ull fact = 1;
    ull mod = 1e9 + 7;
    while (i <= n)
    {
        fact = ((fact % mod) * i) % (mod);
        i++;
    }
    return (fact);
}

ull    power(ull a, ull b)
{
    ull  mod = 1e9 + 7;
    ull  ans =1;
    while (b > 0)
    {
        if (b % 2 == 1)
            ans = ((ans % mod) *  (a % mod)) % mod;
        a = (a % mod) * (a % mod);
        b /= 2;
    }
    return (ans);
}
ull modInverse(ull a, ull m) { return power(a, m - 2); }
 
ull modDiv(ull a, ull b, ull m)
{
    a = a % m;
    ull inv = modInverse(b, m);
    return (inv * a) % m;
}

char calc(char a, char b, char c, char d)
{
    if (a == b && a != c)
        return c;
    if (a == b && a == c)
        return d;

    if (a == c && a != b)
        return b;

    if (b == c && b != a)
        return a;

    return (d);

}

void    solution()
{
    string q1, q2,q3;

    cin >> q1;
    cin >> q2;
    cin >> q3;
    int f = 1;

    if (q1[1] != q2[1])
    {
        if (q1[1] == '<')
        {
            reverse(q2.begin(), q2.end());
            if (q2[1] == '<')
                q2[1] = '>';
            else
                q2[1] = '<';
        }
        else
        {
            reverse(q1.begin(), q1.end());
            if (q1[1] == '<')
                q1[1] = '>';
            else
                q1[1] = '<';
        }
    }
    if (q1[1] == q2[1] && q1[1] == '>')
    {
        reverse(q1.begin(), q1.end());
        if (q1[1] == '<')
            q1[1] = '>';
        else
            q1[1] = '<';
        reverse(q2.begin(), q2.end());
        if (q2[1] == '<')
            q2[1] = '>';
        else
            q2[1] = '<';
    }
    if (q2[1] != q3[1])
    {
        reverse(q3.begin(), q3.end());
        if (q3[1] == '<')
            q3[1] = '>';
        else
            q3[1] = '<';
    }
    
    char l ,r;

    l = calc(q1[0], q2[0], q3[0], 'D');
    r = calc(q1[2], q2[2], q3[2], 'E');

    if (l != r)
        cout << "Impossible\n";
    else
    {
            if (q1[0] != l)
                cout << q1[0];
            else
                cout << q2[0];
            
            cout << l;
            if (q1[2] != l)
                cout << q1[2];
            else
                cout << q2[2];
        cout << "\n";
    }



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