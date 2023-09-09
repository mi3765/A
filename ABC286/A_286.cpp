#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = p; i <= q; i++) swap(a[i - 1], a[r - p + i - 1]);
    for(int i = 0; i < n; i++) {
        cout << a[i];
        if(i < n - 1) cout << ' ';
            else cout << endl;
    }
    return 0;
}