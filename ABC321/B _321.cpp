#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    int sum = 0;
    int max_value = a[n - 1];
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    sum -= a[1];
    sum -= a[n - 1];
    int ans = x - sum;
    if (ans >= 0 && ans <= max_value)
        cout << ans << endl;
    else if (sum >= x)
        cout << 0 << endl;
    else
        cout << -1 << endl;
    return 0;
}