#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for(auto& x: s) cin >> x;

    for(int i = 0; i < n; i++) {
        if(s[i] == "and" ||
            s[i] == "not" ||
            s[i] == "that" ||
            s[i] == "the" ||
            s[i] == "you") {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}