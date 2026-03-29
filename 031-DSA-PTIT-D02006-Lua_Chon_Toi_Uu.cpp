#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Job {
    int start, finish;
};

bool cmp(Job a, Job b) {
    if (a.finish != b.finish) return a.finish < b.finish;
    return a.start < b.start;
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
        vector<Job> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].start >> a[i].finish;
        }

        sort(a.begin(), a.end(), cmp);

        int cnt = 0;
        int lastFinish = -1;

        for (int i = 0; i < n; i++) {
            if (a[i].start >= lastFinish) {
                cnt++;
                lastFinish = a[i].finish;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
