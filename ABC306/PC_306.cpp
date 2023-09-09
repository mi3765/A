#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cnt(n + 1), ans;
    for(int i = 0; i < n*3; i++) {
        int a;
        cin >> a;
        cnt[a]++;
        if(cnt[a] == 2) ans.push_back(a);
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i];
        if(i != n - 1) cout << ' ';
            else cout << endl;
    }
    return 0;
}