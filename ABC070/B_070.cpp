#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int answer = min(b, d) - max(a, c);
    if(answer >= 0) cout << answer << endl;
        else cout << 0 << endl;
    return 0;
}