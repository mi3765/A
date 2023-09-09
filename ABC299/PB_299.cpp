#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> c(n);
    vector<int> r(n);
    for(auto& x: c) cin >> x;
    for(auto& x: r) cin >> x;
    int ans = 0;
    int m = 0;

    for(int i = 0; i < n; i++) {
        if(c[i] == t) {
            m = max(m, r[i]);
            if(m == r[i]) ans = i + 1;
        }
    }
    if(ans != 0) {
        cout << ans << endl;
        return 0;
    }
    for(int i = 0; i < n; i++) {
        if(c[0] == c[i]) {
            m = max(m, r[i]);
            if(m == r[i]) ans = i + 1;
        }
    }
    cout << ans << endl;
    return 0;
}