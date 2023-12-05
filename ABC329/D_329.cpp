#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> cnt(n + 1);
    pair<int, int> ans(0, -1);
    rep(i, m)
    {
        int a;
        cin >> a;
        cnt[a]++;
        // min(pair型, pair型)は第一要素が同じ場合にのみ、第二要素同士で最小値を比較する
        ans = min(ans, make_pair(-cnt[a], a));
        cout << ans.second << '\n';
    }
}