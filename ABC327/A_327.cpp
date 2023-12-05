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
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            cout << "Yes" << endl;
            return 0;
        }
        else if (s[i] == 'b' && s[i + 1] == 'a')
        {
            cout << "Yes" << endl;
            return 0;
        }
        else
            continue;
    }
    cout << "No" << endl;
}