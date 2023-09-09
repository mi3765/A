#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& s: a) cin >> s;
    for(int i = 0; i < n - 1; i++) {
        if(a[i] - a[i + 1] > 1)
    }
    return 0;
}