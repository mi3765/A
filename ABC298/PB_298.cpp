#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> a) {
    int n = a.size();
    vector<vector<int>> r(n, vector<int>(n));
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < n; j++) {
            r[i][j] = a[n + 1 - j][i];
        }
    }
    return r;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<vector<int>> b(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cin >> a[i][j];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cin >> b[i][j];
    }

    for(int c = 0; c < 4; c++) {
        bool ok = false;
        for(int i = 0; i  < n; i++) {
            for(int j = 0; j < n; j++) if(a[i][j] == b[i][j]) ok = true;
        }
        if(ok) {
            cout << "Yes" << endl;
            return 0;
        }
        a = rotate(a);
    }
    cout << "No" << endl;
    return 0;
}