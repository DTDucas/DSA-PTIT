#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& a, int k) {
    int left = 0, right = (int)a.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == k) return mid + 1;
        if (a[mid] < k) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

// author: Trần Quang Dương aka DTDucas

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int pos = binarySearch(a, k);
        if (pos == -1) cout << "NO\n";
        else cout << pos << '\n';
    }

    return 0;
}
