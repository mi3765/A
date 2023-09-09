#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    vector<string> t(m);
    vector<bool> stopped(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < m; i++) {
        cin >> t[i];
        for(int j = 0; j < n; j++) {
            if(s[j] == t[i]) {
                cout << "Yes" << endl;
                stopped[j] = true;
                break;
            }
        }
    }

    return 0;
}