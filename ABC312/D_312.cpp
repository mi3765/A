#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using mint = modint998244353;

int main() {
    string s; cin >> s;
    int n = s.size();
    vector dp(n + 1, vector<mint>(n + 1));
    dp[0][0] = 1;
    rep(i, n) {
        rep(j, n) {
            if(s[i] != ')') dp[i + 1][j + 1] += dp[i][j];
            if(s[i] != '(' && j > 0) dp[i + 1][j - 1] += dp[i][j];
        }
    }
    cout << dp[n][0].val() << endl;
    return 0;
}