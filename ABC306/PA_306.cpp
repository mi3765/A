#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    vector<char> double_s;
    for(int i = 0; i < n; i++) {
        double_s.push_back(s[i]);
        double_s.push_back(s[i]);
    }
    for(int i = 0; i < 2*n; i++) cout << double_s[i];
    return 0;
}