#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int n;
vector<string> a;
set<string> res;
string cur;

void backtrack(int pos) {
    for (int i = pos; i < n; i++) {
        cur += a[i];
        res.insert(cur);

        // author: Trần Quang Dương aka DTDucas

        backtrack(i + 1);
        for (int j = 0; j < (int)a[i].size(); j++) cur.pop_back();
    }
}

int main() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    backtrack(0);

    for (const string &x : res) cout << x << '\n';
    return 0;
}
