#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;
using m = map<int, int>;

int main() {
    int n; cin >> n;
    vector<int> s(n);
    int ans = 0;
    int x = 1e9; 
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        ans += s[i];
        if(s[i] % 10 != 0) {
            x = min(x, s[i]);
        }
    }
    sort(s.begin(), s.end());
    if(ans % 10 != 0) cout << ans << endl;
        else {
            if(ans - x >= 0) cout << ans - x << endl;
                else cout << 0 << endl;
        }
    return 0;
}