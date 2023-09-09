#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(auto& x: s) cin >> x;
    auto test = [&](int i, int j, int d) {
        for(auto& x: vector{+d, -d}) {
            for(auto& y: vector{+d, -d}) {
                int s = i + x, t = y + j;
            }
        }
    }

    return 0;
}