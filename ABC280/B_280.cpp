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
    vector<ll> s(n);
    rep(i, n)
    {
        cin >> s[i];
        if (i == 0)
            cout << s[i] << " ";
        else
        {
            s[i] = s[i] - s[i - 1];
            ll ans = 0;
            rep(j, i)
            {
                ans = s[i] - s[j];
            }
            cout << ans << " ";
        }
    }
}