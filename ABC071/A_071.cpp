#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;

int main() {
    int x, a, b;
    cin >> x >> a >> b;
    if(abs(x - a) < abs(x - b)) cout << 'A' << endl;
        else cout << 'B' << endl;
    return 0;
}