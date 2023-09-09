#include <bits/stdc++.h>
using namespace std;
int main() {
    double n;
    cin >> n;
    vector<double> x(5 * n);
    for(int i = 0; i < 5 * n; i++) cin >> x[i];
    double sum = 0;
    sort(x.begin(), x.end());
    for(int i = 0; i < n; i++) x[i] = 0;
    sort(x.begin(), x.end(), greater<int>());
    for(int i = 0; i < n; i++) x[i] = 0;
    for(int i = 0; i < 5 * n; i++) {
        sum += x[i];
    }
    double avg = sum / (3 * n);
    cout << setprecision(20) << avg << endl;
    return 0;
}

    // for(int i = 0; i < 5 * n; i++) cout << x[i] << endl;

