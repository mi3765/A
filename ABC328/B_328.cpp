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
    vector<int> d(n);
    int count = 0;
    rep(i, n) cin >> d[i];
    for (int i = 1; i <= n; ++i)
    {
        string month = to_string(i);
        for (int j = 1; j <= d[i - 1]; ++j)
        {
            string date = month + to_string(j);
            if (size(set<char>(date.begin(), date.end())) == 1)
            {
                ++count;
            }
        }
    }
    cout << count << endl;
}