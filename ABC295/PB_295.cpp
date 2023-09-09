#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<string> s(r);
    for(int i = 0; i < r; i++) cin >> s[i];
    vector bombFlag(r, vector<bool>(c));
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(!isdigit(s[i][j])) continue;
            int power = s[i][j] - '0';
            for(int k = 0; k < r; k++) {
                for(int l = 0; l < c; l++) {
                    if(abs(i - k) + abs(j - l) <= power) bombFlag[k][l] = true;
                }
            }
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(bombFlag[i][j]) s[i][j] = '.';
        }
    }
    for(int i = 0; i < r; i++) cout << s[i] << endl;
    return 0;
}
