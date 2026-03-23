#include <iostream>
#include <set>
#include <string>
using namespace std;

int T, k;
string s, cur;
set<string> res;

void backtrack(int pos, int start) {
    if (pos == k) {
        res.insert(cur);
        return;
    }

    for (int i = start; i < (int)s.size(); i++) {
        cur.push_back(s[i]);
        backtrack(pos + 1, i + 1);
        cur.pop_back();
    }
}

// author: Trần Quang Dương aka DTDucas

int main() {
    cin >> T;
    while (T--) {
        cin >> s >> k;
        res.clear();
        cur.clear();

        backtrack(0, 0);

        for (const string &x : res) {
            cout << x << '\n';
        }
    }
    return 0;
}
