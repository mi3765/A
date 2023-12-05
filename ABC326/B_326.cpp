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
    int ans = 0;
    for (int i = n; i <= 100000000; ++i)
    {
        int onehundred = i / 100;
        int ten = i / 10 - (onehundred * 10);
        int one = i - (onehundred * 100) - (ten * 10);
        int compare = onehundred * ten;
        if (compare == one)
        {
            ans = i;
            cout << ans << endl;
            break;
        }
    }
    return 0;
}