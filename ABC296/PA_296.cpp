#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    bool sex = true;
    for(int i = 0; i < n-1; i++) {
        if(n == 1) break;
        if(s[i] == s[i + 1]) {
            sex = false;
            break;
        } else {
            sex = true;
        }
    }
    if(sex) cout << "Yes" << endl;
        else cout << "No" << endl;
    return 0;
}