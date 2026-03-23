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

void backtrack(int start, int sum) {
    if ((int)cur.size() == k) {
        if (sum % 2 == 0) output();
        return;
    }

    for (int i = start; i <= n; i++) {
        cur.push_back(i);
        backtrack(i + 1, sum + i);
        cur.pop_back();
    }
}

// author: Trần Quang Dương aka DTDucas

int main() {
    cin >> n >> k;
    backtrack(1, 0);
    return 0;
}
