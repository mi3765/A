#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;
using m = map<int, int>;

int main() {
    int n;
    cin >> n;
    vector<int> cnt(n);
    int count = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) cnt[i]++;
        }
        if(cnt[i] >= 8 && i % 2 == 1) count++;
    }
    cout << count << endl;
    return 0;
}