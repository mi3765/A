#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    rep(i, n)
    {
        cout << s[i] << " ";
    }
}