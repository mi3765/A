#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    // int, int型の連想配列を定義
    map<int, int> mp;
    // 連想配列の value を index = a で加算 [0, 0, 0, 0] >> a = 3 なら [0, 0, 0, 1]
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mp[a]++;
    }
    int ans = 0;
    // a が n の範囲内で収まらないためvectorが使えない
    // map の key を無視して、value を cnt として扱う ([_, cnt]: mp)
    // ペアができた(2 の倍数)だけ加算
    for(auto [_, cnt]: mp) ans += cnt / 2;
    cout << ans << endl; 
    return 0;
}