#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> a, used, cur;

void output() {
    for (int i = 0; i < (int)cur.size(); i++) {
        cout << cur[i] << " ";
    }
    cout << m << '\n';
}

void backtrack(int pos) {
    if (pos == n - 1) {
        output();
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (i != m && !used[i]) {
            used[i] = 1;
            cur.push_back(i);
            backtrack(pos + 1);
            cur.pop_back();
            used[i] = 0;
        }
    }
}

// author: Trần Quang Dương aka DTDucas

int main() {
    cin >> n >> m;
    used.assign(n + 1, 0);
    backtrack(0);
    return 0;
}
