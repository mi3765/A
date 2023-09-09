#include <bits/stdc++.h>
using namespace std;

int n, a[100009];
int q, x[100009];

int search(int x);

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    cin >> q;
    for(int i = 1; i <= q; i++) cin >> x[i];
    
    sort(a+1, a+n+1);
    for(int i = 1; i <= q; i++) cout << search(x[i]) << endl;
    return 0;
}

int search(int x) {
    int ans = lower_bound(a+1, a+n+1, x) - a;
    return ans-1;
}