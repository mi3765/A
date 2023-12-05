#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    ull b;
    cin >> b;
    for (int i = 1; i <= 15; i++)
    {
        ull ans = 1;
        for (int j = 0; j < i; j++)
            ans *= i;
        if (ans == b)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}