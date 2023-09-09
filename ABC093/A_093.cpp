#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<char> t;
    for(int i = 0; i < 3; i++) t.insert(s[i]);
    if(t.size() == 3) cout << "Yes" << endl;
        else cout << "No" << endl;
    return 0;
}