#include <iostream>
using namespace std;

const long long MOD = 1000000007;

long long powerMod(long long n, long long k) {
    long long res = 1;
    n %= MOD;
    while (k > 0) {
        if (k % 2 == 1) res = (res * n) % MOD;
        n = (n * n) % MOD;
        k /= 2;
    }
    return res;
}

// author: Trần Quang Dương aka DTDucas

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long n, k;
        cin >> n >> k;
        cout << powerMod(n, k) << '\n';
    }

    return 0;
}
