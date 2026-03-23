#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> a;

void output() {
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i != n - 1) cout << " ";
    }
    cout << '\n';
}

void backtrack(int pos, int cnt1) {
    if (pos == n) {
        if (cnt1 % 2 == 0) output();
        return;
    }

    a[pos] = 0;
    backtrack(pos + 1, cnt1);

    // author: Trần Quang Dương aka DTDucas

    a[pos] = 1;
    backtrack(pos + 1, cnt1 + 1);
}

int main() {
    cin >> n;
    a.resize(n);
    backtrack(0, 0);
    return 0;
}
