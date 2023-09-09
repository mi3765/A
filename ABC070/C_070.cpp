#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    int n;
    cin >> n;
    vector<ll> t(n);
    ll answer = 1;
    for(int i = 0; i < n; i++) {
        cin >> t[i];
        answer = lcm(answer, t[i]);
    }

    cout << answer << endl;
    return 0;
}