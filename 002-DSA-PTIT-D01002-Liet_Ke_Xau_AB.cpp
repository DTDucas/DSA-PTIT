#include <iostream>
#include <vector>
using namespace std;

int n;
vector<char> s;

void output() {
    for (int i = 0; i < n; i++) cout << s[i];
    cout << '\n';
}

void backtrack(int pos, int cntA, int cntB) {
    if (pos == n) {
        if (cntA > 0 && cntB > 0) output();
        return;
    }

    s[pos] = 'A';
    backtrack(pos + 1, cntA + 1, cntB);

    // author: Trần Quang Dương aka DTDucas

    s[pos] = 'B';
    backtrack(pos + 1, cntA, cntB + 1);
}

int main() {
    cin >> n;
    s.resize(n);
    backtrack(0, 0, 0);
    return 0;
}
