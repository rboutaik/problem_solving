#include <iostream>
#include <cmath>

using namespace std;

long long solve(long long k) {
    
    long long left = 1;
    long long right = 1e18;
    
    while (left < right) {
        long long mid = left + (right - left) / 2;
        

        
        
        if (perfect_squares < k) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    
    return left;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long k;
        cin >> k;
        cout << solve(k) << '\n';
    }
    
    return 0;
}