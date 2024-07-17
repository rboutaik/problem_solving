#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t, n, a;
    cin >> t;
    while (t > 0) {
        cin >> n;
        int q = 0;
        unordered_map<long, int> x;
        
        for (int i = 0; i < n; ++i) {
            cin >> a;
            if (x[a] == 0) {
                x[2147483647 - a]++;
                q++;
            } else {
                x[a]--;
            }
        }
        cout << q << endl;
        t--;
    }
    return 0;
}
