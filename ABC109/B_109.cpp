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
    map<string, bool> mp;
    mp[s] = true;
    for(int i = 1; i < n; i++) {
        string t;
        cin >> t;
        if(mp[t] == true) {
            cout << "No" << endl;
            return 0;
        } else if(s[s.size() - 1] != t[0]) {
            cout << "No" << endl;
            return 0;
        } else {
            s = t;
            mp[t] = true;
        }
    }
    cout << "Yes" << endl;
    return 0;
}