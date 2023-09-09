#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> c(n);
    vector<string> d(m);
    vector<int> p(m + 1);
    for(int i = 0; i < n; i++) cin >> c[i];
    for(int i = 0; i < m; i++) cin >> d[i];
    for(int i = 0; i <= m; i++) cin >> p[i];
    int sum = 0;
    bool found = false;
    for(int i = 0; i < n; i++) {
        found = false;
        for(int j = 0; j < m; j++) {
            if(c[i] == d[j]) {
                sum += p[j + 1];
                found = true;
                break;
            }
        }
        if (!found) {
            sum += p[0];
        }
    }
    cout << sum << endl;
    return 0;
}
