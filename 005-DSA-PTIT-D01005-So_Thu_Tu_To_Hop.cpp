#include <iostream>
#include <vector>
using namespace std;

int T, n, k;
vector<int> a, cur;
long long ans, cnt;

void backtrack(int start) {
    if ((int)cur.size() == k) {
        cnt++;
        if (cur == a) ans = cnt;
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
    cin >> T;
    while (T--) {
        cin >> n >> k;
        a.resize(k);
        for (int i = 0; i < k; i++) cin >> a[i];

        cur.clear();
        cnt = 0;
        ans = 0;

        backtrack(1);

        cout << ans << '\n';
    }
    return 0;
}
