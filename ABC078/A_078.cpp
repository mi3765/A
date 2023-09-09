#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;
using m = map<int, int>;

int main() {
    char x, y;
    cin >> x >> y;
    if(x < y) cout << "<" << endl;
        else if(x > y) cout << ">" << endl;
        else cout << "=" << endl;
    return 0;
}