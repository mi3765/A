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
    int y = s.length();
    for (int i = 1; i < y; i += 2)
    {
        if (s[i] == '1')
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}