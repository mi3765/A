#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int l = 0;
    int stock = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'o') {
            l++;
        } else if(l > 0 && s[i] == '-') {
            stock = max(stock, l);
            l = 0;
        }
    }
    if(stock == 0) cout << -1 << endl;
        else cout << stock << endl;
    return 0;
}