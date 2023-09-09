#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    bool ryo = false;
    bool huka = true;
    for(int i = 0; i < n; i++)  {
        if(s[i] == 'o') ryo = true;
        if(s[i] == 'x') {
            huka = false; 
            break;
        }
    }
    if(ryo and huka) cout << "Yes" << endl;
        else cout << "No" << endl;
    return 0;
}