#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int& x: a) cin >> x;
    vector<int> even;
    copy_if(a.begin(), a.end(), back_inserter(even), [](int i) {
        return i % 2 == 0;
    });
    for(int &i: even) cout << i << " ";
    return 0;
}