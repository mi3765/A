#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int c = 0;
    int k;
    string rkr;
    for(int i = 0; i < 8; i++) {
        if(s[i] == 'B' && (i + 1) % 2 == 0) c++; 
        if(s[i] == 'B' && (i + 1) % 2 == 1) c--;
    }
    if(c == 0) {
        for(int i = 0; i < 8; i++) {
            if(s[i] == 'K') rkr.push_back('k');
            if(s[i] == 'R') rkr.push_back('r');
        }
        if(rkr == "rkr") {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}