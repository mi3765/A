#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    set<pair<int, int>> used({{0, 0}});
    int x = 0, y = 0;
    for(char c: s) {
        if(c == 'R') x++;
        if(c == 'L') x--;
        if(c == 'U') y++;
        if(c == 'D') y--;
        if(used.find({x, y}) != used.end()) {
            cout << "Yes" << endl;
            return 0;
        }
        used.insert({x, y});
    }
    cout << "No" << endl;
    return 0;
}