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
    if (n == 1)
    {
        cout << "Yes" << endl;
        return 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        if (s[i] <= s[j])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}