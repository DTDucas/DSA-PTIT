#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<int> cur;
long long pos = 0;

void output() {
    for (int i = 0; i < k; i++) {
        cout << cur[i];
        if (i != k - 1) cout << " ";
    }
    cout << '\n';
}

// author: Trần Quang Dương aka DTDucas

void backtrack(int start) {
    if ((int)cur.size() == k) {
        if (pos % k == 0) output();
        pos++;
        return;
    }

    for (int i = start; i <= n; i++) {
        cur.push_back(i);
        backtrack(i + 1);
        cur.pop_back();
    }
}

int main() {
    cin >> n >> k;
    backtrack(1);
    return 0;
}
