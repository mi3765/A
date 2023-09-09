#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;
using m = map<int, int>;

int main() {
    int n;
    cin >> n;
    set<char> s;
    char t;
    for(int i = 0; i < n; i++) {
        cin >> t;
        s.insert(t);
        if(s.size() == 3) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}