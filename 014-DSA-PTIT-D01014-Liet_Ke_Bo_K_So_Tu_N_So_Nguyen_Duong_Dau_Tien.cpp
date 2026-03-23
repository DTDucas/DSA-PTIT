#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<int> cur;

void output() {
    for (int i = 0; i < k; i++) {
        cout << cur[i];
        if (i != k - 1) cout << " ";
    }
    cout << '\n';
}

void backtrack(int pos, int start) {
    if (pos == k) {
        output();
        return;
    }

    for (int i = start; i <= n; i++) {
        cur.push_back(i);
        backtrack(pos + 1, i);
        cur.pop_back();
    }
}

// author: Trần Quang Dương aka DTDucas

int main() {
    cin >> n >> k;
    backtrack(0, 1);
    return 0;
}
