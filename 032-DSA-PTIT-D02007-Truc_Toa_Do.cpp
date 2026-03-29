#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Segment {
    int l, r;
};

bool cmp(Segment a, Segment b) {
    if (a.r != b.r) return a.r < b.r;
    return a.l < b.l;
}

// author: Trần Quang Dương aka DTDucas

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<Segment> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i].l >> a[i].r;
        }

        sort(a.begin(), a.end(), cmp);

        int cnt = 0;
        int last = -1;

        for (int i = 0; i < n; i++) {
            if (a[i].l >= last) {
                cnt++;
                last = a[i].r;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
