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
    vector<int> a(n);
    vector<int> ruiseki(n);
    rep(i, n)
    {
        cin >> a[i];
        if (i >= 1)
            ruiseki[i] = ruiseki[i - 1] + (a[i] - a[i - 1]);
        cout << ruiseki[i] << " ";
    }
    rep(i, n)
    {
    }
    sort(a.begin(), a.end());

    return 0;
}