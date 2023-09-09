#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<bool> call(n, false);
    int count = 0;
    for(int i = 0; i < n; i++) if(call[i] == 0) call[a[i] - 1] = true;
    for(int i = 0; i < n; i++) if(call[i] == 0) count++;
    cout << count << endl;
    for(int i = 0; i < n; i++) if(call[i] == 0) cout << i + 1 << ' ';
    return 0;
}