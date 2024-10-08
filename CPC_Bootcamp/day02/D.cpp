#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <string>
#include <stack>
#define ll long long
#define ull unsigned long long
# define endl '\n'

using namespace std;

void solution()
{
    int n, k; 
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    multiset<int> st(v.begin(), v.begin() + k);
    auto it = next(st.begin(), (k - 1) / 2);
    
    cout << *it << " ";
    
    for (int i = k; i < n; ++i) {
        st.insert(v[i]);
        if (v[i] < *it)
            --it;
        if (v[i - k] <= *it)
            ++it;
        st.erase(st.lower_bound(v[i - k]));
        cout << *it << " ";
    }
    
    cout << endl;
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