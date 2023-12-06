#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int N, S, M, L;
    cin >> N >> S >> M >> L;
    int ans = 10e8;
    for (int i = 0; i <= 17; i++)
    {
        for (int j = 0; j <= 13; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                if (i * 6 + j * 8 + k * 12 >= N)
                {
                    ans = min(ans, S * i + M * j + L * k);
                }
            }
        }
    }
    cout << ans << endl;
}