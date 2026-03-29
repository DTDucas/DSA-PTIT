#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    int money[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    while (T--) {
        int n;
        cin >> n;
        int cnt = 0;

        for (int i = 0; i < 10; i++) {
            cnt += n / money[i];
            n %= money[i];
        }

        // author: Trần Quang Dương aka DTDucas

        cout << cnt << '\n';
    }

    return 0;
}
