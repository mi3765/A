#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;
using m = map<int, int>;

int main() {
    int a, b; cin >> a >> b;
    int ans = (a * b) - a - b + 1;
    cout << ans << endl;
    return 0;
}