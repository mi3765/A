#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int b = s.size() / 2;
    vector<char> ans;
    for(int i = 0; i < b; i++) {
        ans.push_back(s[2*i+1]);
        ans.push_back(s[2*i]);
    }
    for(int i = 0; i < s.size(); i++) cout << ans[i];
    return 0;
}