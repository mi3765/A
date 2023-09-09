#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    map<string, int> mp;
    mp.insert(make_pair("tourist", 3858));
    mp.insert(make_pair("ksun48", 3679));
    mp.insert(make_pair("Benq", 3658));
    mp.insert(make_pair("Um_nik", 3648));
    mp.insert(make_pair("apiad", 3638));
    mp.insert(make_pair("Stonefeang", 3630));
    mp.insert(make_pair("ecnerwala", 3613));
    mp.insert(make_pair("mnbvmar", 3555));
    mp.insert(make_pair("newbiedmy", 3516));
    mp.insert(make_pair("semiexp", 3481));

    string s;
    cin >> s;
    int value = mp.at(s);
    cout << value << endl;

    return 0;
}