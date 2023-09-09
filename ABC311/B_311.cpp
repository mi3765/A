#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;
using m = map<int, int>;

int main() {
    int n, d;
    cin >> n >> d;
    vector<vector<char>> s(n, vector<char>(d));
    vector<int> cnt(d);
    int ans = 0;
    int one = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < d; j++) {
            cin >> s[i][j];
            if(s[i][j] == 'o') cnt[j]++;
        }
    }
    for(int i = 0; i < d; i++) {
        if(cnt[i] == n) ans++;
            else {
                one = max(one, ans);
                ans = 0;
            }
    }
    cout << max(one, ans) << endl;
    return 0;
}