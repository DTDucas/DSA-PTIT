#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1000000007;

// author: Trần Quang Dương aka DTDucas

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<long long> dp(n + 1, 0), prefix(n + 1, 0);
        dp[0] = 1;
        prefix[0] = 1;

        for (int i = 1; i <= n; i++) {
            int l = max(0, i - k);
            int r = i - 1;

            dp[i] = prefix[r];
            if (l > 0) dp[i] = (dp[i] - prefix[l - 1] + MOD) % MOD;

            prefix[i] = (prefix[i - 1] + dp[i]) % MOD;
        }

        cout << dp[n] % MOD << '\n';
    }

    return 0;
}
