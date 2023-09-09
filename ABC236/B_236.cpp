#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int aSize = 4 * n - 1;
    vector<int> cnt(n);
    vector<int> a(aSize);
    for(int i = 0; i < aSize; i++) {
        cin >> a[i];
        cnt[a[i] - 1]++;
    }
    for(int i = 0; i < n; i++) {
        if(cnt[i] != 4) cout << i + 1 << endl;
    }
    return 0;
}