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
    string s, t;
    cin >> s >> t;
    bool prefix = true;
    bool suffix = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
            prefix = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[m - n + i])
            suffix = false;
    }
    if (prefix)
    {
        cout << (suffix ? 0 : 1) << endl;
    }
    else
    {
        cout << (suffix ? 2 : 3) << endl;
    }
}