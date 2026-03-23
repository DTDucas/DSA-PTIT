#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> a;
vector<long long> fib;

bool isFibonacci(long long x) {
    for (long long v : fib) {
        if (v == x) return true;
        if (v > x) return false;
    }
    return false;
}

void output(long long id) {
    cout << id << ": ";
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i != n - 1) cout << " ";
    }
    cout << '\n';
}

void backtrack(int pos, long long &cnt) {
    if (pos == n) {
        cnt++;
        if (isFibonacci(cnt)) output(cnt);
        return;
    }

    a[pos] = 0;
    backtrack(pos + 1, cnt);

    // author: Trần Quang Dương aka DTDucas

    a[pos] = 1;
    backtrack(pos + 1, cnt);
}

int main() {
    cin >> n;
    a.resize(n);

    fib.push_back(1);
    fib.push_back(2);
    while (true) {
        long long next = fib[fib.size() - 1] + fib[fib.size() - 2];
        if (next > (1LL << n)) break;
        fib.push_back(next);
    }

    long long cnt = 0;
    backtrack(0, cnt);

    return 0;
}
