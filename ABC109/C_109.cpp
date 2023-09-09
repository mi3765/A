#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;
using m = map<int, int>;

int main() {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] = abs(a[i] - x);
    }
    int ans = a[0];
    for(int i = 1; i < n; i++) {
        ans = gcd(a[i], ans);
    }
    cout << ans << endl;
    return 0;
}