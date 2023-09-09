#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    int a[100009], b[100009];
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= m; i++) cin >> b[i];

    int c[200020];
    for(int i = 1; i <= n; i++) {
        c[i] = a[i];
    }
    for(int i = n+1; i <= n+m; i++) {
        c[i] = b[i-n];
    }
    sort(c+1, c+n+m+1);
    for(int i = 1; i <= n; i++) {
        int* ans = find(c+1, c+n+m+1, a[i]);
        int index = ans - c; 
        cout << index << ' ';
    }
    cout << "\n";
    for(int i = 1; i <= m; i++) {
        int* ans = find(c+1, c+n+m+1, b[i]);
        int index = ans - c;
        cout << index << ' ';
    }
    return 0;
}