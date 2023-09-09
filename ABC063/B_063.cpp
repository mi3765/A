#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;
using m = map<int, int>;

int main() {
    string s; cin >> s;
    bool flag = false;
    for(int i = 0; i < s.size(); i++) {
        for(int j = i + 1; j < s.size(); j++) {
            if(s[i] == s[j]) flag = true;
        }
    }
    if(flag) cout << "no" << endl;
        else cout << "yes" << endl;
    return 0;
}