#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;
using m = map<int, int>;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(a, b) + min(c, d) << endl;
    return 0;
}