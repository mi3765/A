#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using p = pair<int, int>;
using m = map<int, int>;

int main() {
    int n, d, x;
    cin >> n >> d >> x;
    vector<int> a(n);
    int cnt = n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        for(int j = 1; j <= d; j++) {
            if(j * a[i] + 1 <= d) cnt++;
                else break;
        }
    }
    cout << cnt + x << endl;
    return 0;
}