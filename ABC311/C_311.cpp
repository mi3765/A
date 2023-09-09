#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;
using m = map<int, int>;
using graph = vector<vector<int>>;

int main() {
    int n; cin >> n;
    graph g(n);
    bool hasLoop = false;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        g[i].push_back(i + 1);
        g[i].push_back(a[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
        if(g[i].back() == g[j][0]) {
            g[i] += g[j];
            if(g[0] == g)
        }
        }
    }
    return 0;
}