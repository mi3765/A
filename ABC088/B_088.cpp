#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& s: a) cin >> s;
    int alice = 0, bob = 0;
    sort(a.begin(), a.end(), greater<int>());
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) alice += a[i];
            else bob += a[i];
    }
    cout << alice - bob << endl;
    return 0;
}