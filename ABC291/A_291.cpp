#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < s.size(); i++) {
        int flag = s[i] - 'a';
        if(flag < 0) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}