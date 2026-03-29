#include <iostream>
#include <vector>
using namespace std;

using ull = unsigned long long;

vector<ull> len(93);

char solve(int n, ull k) {
    if (n == 1) return 'A';
    if (n == 2) return 'B';
    if (k <= len[n - 2]) return solve(n - 2, k);
    return solve(n - 1, k - len[n - 2]);
}

// author: Trần Quang Dương aka DTDucas

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    len[1] = 1;
    len[2] = 1;
    for (int i = 3; i < 93; i++) len[i] = len[i - 2] + len[i - 1];

    int T;
    cin >> T;
    while (T--) {
        int n;
        ull k;
        cin >> n >> k;
        cout << solve(n, k) << '\n';
    }

    return 0;
}
