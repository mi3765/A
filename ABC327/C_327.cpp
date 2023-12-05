#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    vector<vector<int>> v(9, vector<int>(9));
    bool flag = true;
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++i)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++i)
        {
            for (int k = 0; k < 9; ++k)
            {
                if (v[i][j] == k)
            }
        }
    }
}