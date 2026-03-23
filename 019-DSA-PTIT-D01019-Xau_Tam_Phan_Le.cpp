#include <iostream>
#include <string>
using namespace std;

int n;
string s;
long long cnt = 0;

void backtrack(int pos) {
    if (pos == n) {
        cnt++;
        if (cnt % 2 == 1) {
            cout << cnt << ": " << s << '\n';
        }
        return;
    }

    for (char c = 'A'; c <= 'C'; c++) {
        s.push_back(c);

        // author: Trần Quang Dương aka DTDucas

        backtrack(pos + 1);
        s.pop_back();
    }
}

int main() {
    cin >> n;
    backtrack(0);
    return 0;
}
