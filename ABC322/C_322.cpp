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
    vector<bool> fireFlower(n, false);
    vector<int> ans(n);
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        a[i]--;
        fireFlower[a[i]] = true;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (fireFlower[i])
        {
            ans[i] = 0;
        }
        else
        {
            ans[i] = ans[i + 1] + 1;
        }
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << endl;
    return 0;
}