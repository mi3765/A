#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 1; i < n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i + j > n) {
                cout << j - 1 << "\n";
                break;
            }
            if(s[i + j - 1] == s[j - 1]) {
                cout << j - 1 << "\n";
                break;
            }
        }
    }
    return 0;
}