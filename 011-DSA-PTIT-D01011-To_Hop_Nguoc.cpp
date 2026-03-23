#include <iostream>
#include <vector>
using namespace std;

int T, n, k;
vector<int> cur;

void output() {
    for (int i = 0; i < k; i++) {
        cout << cur[i];
        if (i != k - 1) cout << " ";
    }
    cout << '\n';
}

void backtrack(int x) {
    if ((int)cur.size() == k) {
        output();
        return;
    }

    for (int i = x; i >= 1; i--) {
        cur.push_back(i);
        backtrack(i - 1);
        cur.pop_back();
    }
}

// author: Trần Quang Dương aka DTDucas

int main() {
    cin >> T;
    while (T--) {
        cin >> n >> k;
        cur.clear();

        backtrack(n);

        cout << '\n';
    }
    return 0;
}
