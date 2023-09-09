#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    long long t;
    cin >> n >> t;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    const long long ans = t % accumulate(a.begin(), a.end(), 0ll);
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        if(sum + a[i] > ans) {
            cout << i + 1 << ' ' << ans - sum << endl;
            return 0;
        }
        sum += a[i];
    }
    return 0;
}