#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;
using m = map<int, int>;

int main() {
    int n, m; cin >> n >> m;
    int ans = 1900 * m + (n - m) * 100;
    int x = 1;
    for(int i = 0; i < m; i++) x *= 2;
    ans *= x;
    cout << ans << endl;
    return 0;
}