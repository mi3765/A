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
    vector<int> s(n);
    int count = 0;
    rep(i, n)
    {
        cin >> s[i];
        if (s[i] <= x)
            count += s[i];
    }
    cout << count << endl;
}