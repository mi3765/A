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
    for (int i = 0; i < (n - 2); i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
