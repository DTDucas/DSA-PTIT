#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<int> cur;
long long cnt = 0;

bool isPrime(long long x) {
    if (x < 2) return false;
    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void output() {
    cout << cnt << ": ";
    for (int i = 0; i < k; i++) {
        cout << cur[i];
        if (i != k - 1) cout << " ";
    }
    cout << '\n';
}

void backtrack(int start) {
    if ((int)cur.size() == k) {
        cnt++;
        if (isPrime(cnt)) output();
        return;
    }

    for (int i = start; i <= n; i++) {
        cur.push_back(i);
        backtrack(i + 1);
        cur.pop_back();
    }
}

// author: Trần Quang Dương aka DTDucas

int main() {
    cin >> n >> k;
    backtrack(1);
    return 0;
}
