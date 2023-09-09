#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;

int main() {
    string s; cin >> s;
    for(int i = 0; i < 26; i++) {
        bool flag = true;
        for(int j = 0; j < s.size(); j++) {
            if(s[j] == (char)('a' + i)) flag = false;
        }
        if(flag) {
            cout << (char)('a' + i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}