#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;
using m = map<int, int>;

int main() {
    int n;
    cin >> n;
    ull ans = 0;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> v;
    m cnt;
    for(int i = 0; i < n; i++) {
        cnt[a[i]]++;
        if(cnt[a[i]] == 2) {
            cnt[a[i]] = 0;
            v.push_back(a[i]);
        }
    }
    sort(v.begin(), v.end(), greater<int>());

    if(v.size() >= 2) ans = 1LL * v[0] * v[1];
    cout << ans << endl;
    return 0;
}