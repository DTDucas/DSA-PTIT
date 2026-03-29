#include <iostream>
#include <string>
using namespace std;

string largestNumber(int n, int s) {
    string res = "";
    for (int i = 0; i < n; i++) {
        int digit = min(9, s);
        res += char(digit + '0');
        s -= digit;
    }
    if (s > 0) return "-1";
    return res;
}

// author: Trần Quang Dương aka DTDucas

string smallestNumber(int n, int s) {
    if (s == 0) return (n == 1 ? "0" : "-1");
    if (s > 9 * n) return "-1";

    string res(n, '0');
    s--;

    for (int i = n - 1; i >= 1; i--) {
        int digit = min(9, s);
        res[i] = char(digit + '0');
        s -= digit;
    }

    res[0] = char(s + 1 + '0');
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    cin >> n >> s;

    if ((s == 0 && n > 1) || s > 9 * n) {
        cout << "-1 -1";
        return 0;
    }

    cout << smallestNumber(n, s) << " " << largestNumber(n, s);
    return 0;
}
