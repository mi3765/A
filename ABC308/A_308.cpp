#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> s(8);
    for(int i = 0; i < 8; i++) cin >> s[i];
    bool flag = false;
    for(int i = 0; i < 7; i++) {
        if(s[i] <= s[i + 1]) {
            flag = true;
        } else {
            cout << "No" << endl;
            return 0;
        }
        if(s[i] >= 100 && s[i] <= 675) flag = true;
            else {
                cout << "No" << endl;
                return 0;
        }
        if(s[i] % 25 == 0) flag = true;
            else {
                cout << "No" << endl;
                return 0;
            }
    }
    cout << "Yes" << endl;
    return 0;
}