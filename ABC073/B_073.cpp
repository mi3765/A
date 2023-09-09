#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> l(n), r(n);
    // vector<bool> seat(n);
    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
        int j = l[i], k = r[i];
        for(int i = j; i <= k; i++) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}