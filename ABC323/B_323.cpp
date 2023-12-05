#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<int> count(n);
    vector<pair<int, int>> ans(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == 'o')
                count[i]++;
        }
    }

    vector bucket(n, vector<int>(0));
    for (int i = 0; i < n; i++)
    {
        bucket[count[i]].push_back(i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j : bucket[i])
        {
            cout << j + 1 << " ";
        }
    }
    return 0;
}
