#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> t(n);
    for(auto& x: t) cin >> x;
    vector<int> a(n);
    a[0] = 0;
    for(int i = 1; i < n; i++) {
        a[i] = t[i] - t[i - 1];
        if(a[i] <= d) {
            cout << t[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}