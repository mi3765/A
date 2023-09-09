#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    long long ans = 0;
    int d = s.size();
    for(int i = 0; i < s.size(); i++) {
        int calc = d - i - 1;
        int data = s[i] - 'A' + 1;
        if(calc == 0) {
            ans += data;
        } else {
            ans += data * pow(26, calc);
        }
    }
    cout << ans << endl;
    return 0;
}