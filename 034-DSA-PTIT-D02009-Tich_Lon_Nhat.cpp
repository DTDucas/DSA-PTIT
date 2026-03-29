#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    long long ans = max(a[n - 1] * a[n - 2], a[0] * a[1]);
    ans = max(ans, a[n - 1] * a[n - 2] * a[n - 3]);
    ans = max(ans, a[0] * a[1] * a[n - 1]);

    // author: Trần Quang Dương aka DTDucas

    cout << ans;
    return 0;
}
