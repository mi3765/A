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
    int m = 0;
    int ans = 0;
    rep(i, n)
    {
        cin >> a[i];
        m = max(m, a[i]);
    }
    rep(i, n)
    {
        if (a[i] == m)
            a[i] -= m;
        ans = max(a[i], ans);
    }
    cout << ans << endl;
}