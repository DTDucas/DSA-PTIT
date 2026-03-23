#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int T, n;
string s, cur;
vector<string> res;

void backtrack(int pos) {
    for (int i = pos; i < n; i++) {
        cur.push_back(s[i]);
        res.push_back(cur);
        backtrack(i + 1);
        cur.pop_back();
    }
}

// author: Trần Quang Dương aka DTDucas

int main() {
    cin >> T;
    while (T--) {
        cin >> n >> s;
        sort(s.begin(), s.end());
        res.clear();
        cur.clear();

        backtrack(0);

        sort(res.begin(), res.end());

        for (int i = 0; i < (int)res.size(); i++) {
            cout << res[i];
            if (i != (int)res.size() - 1) cout << " ";
        }
        cout << '\n';
    }
    return 0;
}
