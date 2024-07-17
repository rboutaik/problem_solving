#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <bitset>

using namespace std;
#define int long long
#define double long double
#define vi vector <int>
#define vb vector <bool>
#define vs vector <string>
#define vvi vector <vi>
#define vvb vector <vb>
#define vvs vector <vs>
#define all(x) x.begin(), x.end()
#define	rall(x) x.rbegin(), x.rend()
#define endl '\n'
const int mod = 1e9+7;
const int maxn = 1e5 + 10;


bool isBinary(string s) {
    for (auto &i :s) {
        if (i != '0' && i != '1'){
            return false;
        }
    }
    return true;
}

vi v = {10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111,10000,10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111,100000,100001,100010,100011,100100,100101,100110,100111,101000,101001,101010,101011,101100,101101,101110,101111,110000,110001,110010,110011,110100,110101,110110,110111,111000,111001,111010,111011,111100,111101,111110,111111};

void	solve() {
    int n; cin >> n;

    if (isBinary(to_string(n))) {
        cout << "YES" << endl;
        return;
    }
    for (int i =0; i < v.size();i++) {
        int tmp = n;
        while(tmp) {
            if (isBinary(to_string(tmp))) {
                cout << "YES" << endl;
                return;
            }
            if (tmp % v[i] == 0)
                tmp /= v[i];
            else
                break;
        }
        if (!tmp) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
 
int32_t	main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--)
        solve();
}
//101*111
//1111