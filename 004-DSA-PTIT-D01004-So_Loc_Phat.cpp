#include <iostream>
#include <vector>
#include <string>
using namespace std;

int T, n;
vector<string> res;
string cur;

void backtrack(int pos) {
    if (pos == n) {
        res.push_back(cur);
        return;
    }

    cur.push_back('6');
    backtrack(pos + 1);
    cur.pop_back();

    // author: Trần Quang Dương aka DTDucas

    cur.push_back('8');
    backtrack(pos + 1);
    cur.pop_back();
}

int main() {
    cin >> T;
    while (T--) {
        cin >> n;
        res.clear();
        cur.clear();

        backtrack(0);

        cout << res.size() << '\n';
        for (int i = 0; i < (int)res.size(); i++) {
            cout << res[i];
            if (i != (int)res.size() - 1) cout << " ";
        }
        cout << '\n';
    }
    return 0;
}
