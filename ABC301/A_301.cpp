#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    int count_A = 0;
    int count_T = 0;
    if(n % 2 == 0) n--;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'T') count_T++;
            else count_A++;
    }
    if(count_T > count_A) cout << 'T' << endl;
        else cout << 'A' << endl;
    return 0;
}