#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            a[i] = 1;
    }
    vector<int> sum(n);
    for (int i = 0; i < n - 1; i++)
        sum[i + 1] = sum[i] + a[i];
    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;
        // 半開区間を使う
        l--;
        r--;
        int ans = sum[r] - sum[l];
        cout << ans << endl;
    }
}