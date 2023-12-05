#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n;
    string s;
    cin >> n >> s;

    // Run - Length - Encoding
    vector<pair<char, int>> p;
    p.emplace_back(s[0], 0);
    for (char c : s)
    {
        if (p.back().first == c)
            p.back().second++;
        else
            p.emplace_back(c, 1);
    }
    vector<int> mx(26);
    for (auto [c, len] : p)
    {
        mx[c - 'a'] = max(mx[c - 'a'], len);
    }
    int ans = 0;
    for (int len : mx)
        ans += len;
    cout << ans << endl;
}