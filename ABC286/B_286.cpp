#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;
using m = map<int, int>;

int main() {
    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < (int)s.size() - 1; i++) {
        if(s.substr(i, 2) == "na") {
            s.insert(i + 1, "y");
        }
    }
    cout << s << endl;
    return 0;
}