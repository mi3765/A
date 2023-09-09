#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;
using m = map<int, int>;

int main() {
    string s; cin >> s;
    vector<string> t(7);
    t[0] = "ACE";
    t[1] = "BDF";
    t[2] = "CEG";
    t[3] = "DFA";
    t[4] = "EGB";
    t[5] = "FAC";
    t[6] = "GBD";
    for(int i = 0; i < 7; i++) {
        if(s == t[i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}