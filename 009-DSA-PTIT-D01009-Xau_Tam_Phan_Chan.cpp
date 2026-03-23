#include <iostream>
#include <string>
using namespace std;

int n;
string s;
long long cnt = 0;

// author: Trần Quang Dương aka DTDucas

void backtrack(int pos) {
    if (pos == n) {
        cnt++;
        if (cnt % 2 == 0) {
            cout << cnt << ": " << s << '\n';
        }
        return;
    }

    for (char c = '0'; c <= '2'; c++) {
        s.push_back(c);
        backtrack(pos + 1);
        s.pop_back();
    }
}

int main() {
    cin >> n;
    backtrack(0);
    return 0;
}
