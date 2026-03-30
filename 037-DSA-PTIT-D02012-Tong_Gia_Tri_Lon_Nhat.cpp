#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, M;
    cin >> n >> M;

    vector<long long> dp(M + 1, 0);

    for (int i = 0; i < n; i++) {
        int w, v;
        cin >> w >> v;
        for (int j = M; j >= w; j--) {
            dp[j] = max(dp[j], dp[j - w] + v);
        }
    }

    // author: Trần Quang Dương aka DTDucas

    cout << dp[M];
    return 0;
}
