#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> s(8);
    for(auto& x: s) cin >> x;
    string k = "abcdefgh";
    vector<int> a;
    a = {8, 7, 6, 5, 4, 3, 2, 1};
    int n, m;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(s[i][j] == '*') {
                n = i, m = j;
                break;
            }
        }
    }
    string l = to_string(a[n]);
    l = k[m] + l;
    cout << l << endl;
    return 0;
}