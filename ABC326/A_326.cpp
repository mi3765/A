#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int x, y;
    cin >> x >> y;
    if (x > y)
    {
        if (x - y < 4)
            cout << "Yes";
        else
            cout << "No" << endl;
    }
    else
    {
        if (y - x < 3)
            cout << "Yes";
        else
            cout << "No" << endl;
    }
    return 0;
}