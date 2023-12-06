#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int v = 10e6 + 5;
    // その値の添字を管理する配列
    vector<vector<int>> index(v);
    rep(i, n) index[a[i]].push_back(i);
    vector<ll> ans(n);
    ll now = 0;
    // 大きい値から順に繰り返す
    for (int i = v - 1; i >= 1; --i)
    {
        for (int j : index[i])
            // ans[j]時の値を更新
            ans[j] = now;
        // 値*要素の数でsumを算出
        now += (ll)i * (ll)index[i].size();
    }
    rep(i, n) cout << ans[i] << ' ';
}