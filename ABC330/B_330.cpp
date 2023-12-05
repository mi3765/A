#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
        int ans = 0;
        if (a[i] >= l && a[i] <= r)
            ans = a[i];
        else if (l > a[i])
            ans = l;
        else
            ans = r;
        cout << ans << ' ';
    }
}