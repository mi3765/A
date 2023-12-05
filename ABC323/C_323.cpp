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
    vector<int> a(m);
    vector<string> s(n);
    vector<int> sum(m);
    int maxSum = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        sum[i] = i + 1;
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'o')
            {
                sum[i] += a[j];
            }
        }
        maxSum = max(maxSum, sum[i]);
    }
    for (int i = 0; i < n; i++)
    {
        vector<int> bottom;
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'x')
            {
                bottom.push_back(a[j]);
            }
        }
        sort(bottom.rbegin(), bottom.rend());
        int ans = 0;
        while (sum[i] < maxSum)
        {
            sum[i] += bottom[ans++];
        }
        cout << ans << endl;
    }
    return 0;
}