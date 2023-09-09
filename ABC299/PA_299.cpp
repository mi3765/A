#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    string aba;
    for(int i = 0; i < n; i++) {
        if(s[i] == '|') aba.push_back('a');
        if(s[i] == '*') aba.push_back('b');
    }
    if(aba == "aba") cout << "in" << endl;
        else cout << "out" << endl;
    return 0;
}