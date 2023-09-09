#include <bits/stdc++.h>
using namespace std;


int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(auto& x: s) cin >> x;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(j < w - 1) {
                if(s[i][j] == 'T' && s[i][j + 1] == 'T') {
                    s[i][j] = 'P';
                    s[i][j + 1] = 'C';
                }
            }
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}