#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    set<int> s;
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
        if(s.count(vec[i])) s.erase(vec[i]);
            else s.insert(vec[i]);
    }
    cout << s.size() << endl;

    return 0;
}