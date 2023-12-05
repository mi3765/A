#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    int count = 0;
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] >= l)
            count++;
    }
    cout << count << endl;
}