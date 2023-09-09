#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> coins(n);
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        coins[i] = make_pair(make_pair(a, a + b), i);
    }

    sort(coins.begin(), coins.end(), [&](const pair<pair<int, int>, int>& x, const pair<pair<int, int>, int>& y) {
        return 1LL * x.first.first * y.first.second > 1LL * y.first.first * x.first.second || (1LL * x.first.first * y.first.second == 1LL * y.first.first * x.first.second && x.second < y.second);
    });

    for(int i = 0; i < n; i++) {
        cout << coins[i].second + 1;
        if(i == n - 1) cout << endl;
        else cout << ' ';
    }

    return 0;
}
