#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int n, k;
vector<string> a;
set<string> res;
string cur;

void backtrack(int pos, int cnt) {
    if (cnt == k) {
        res.insert(cur);
        return;
    }

    for (int i = pos; i < n; i++) {
        cur += a[i];
        backtrack(i + 1, cnt + 1);
        for (int j = 0; j < (int)a[i].size(); j++) cur.pop_back();
    }
}

// author: Trần Quang Dương aka DTDucas

int main() {
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    backtrack(0, 0);

    for (const string &x : res) cout << x << '\n';
    return 0;
}
