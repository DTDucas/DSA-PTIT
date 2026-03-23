#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int T, n, k;
vector<int> a, cur;

void output() {
    for (int i = 0; i < k; i++) {
        cout << cur[i];
        if (i != k - 1) cout << " ";
    }
    cout << '\n';
}

void backtrack(int start) {
    if ((int)cur.size() == k) {
        output();
        return;
    }

    for (int i = start; i < n; i++) {
        cur.push_back(a[i]);
        backtrack(i + 1);
        cur.pop_back();
    }
}

// author: Trần Quang Dương aka DTDucas

int main() {
    cin >> T;
    while (T--) {
        cin >> n >> k;
        a.resize(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        cur.clear();

        backtrack(0);
    }
    return 0;
}
