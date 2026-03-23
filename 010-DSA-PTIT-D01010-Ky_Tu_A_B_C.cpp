#include <iostream>
#include <string>
using namespace std;

int n;
string s;

bool check() {
    int cntA = 0, cntB = 0, cntC = 0;
    for (char c : s) {
        if (c == 'A') cntA++;
        else if (c == 'B') cntB++;
        else cntC++;
    }
    return cntA > 0 && cntB > 0 && cntC > 0 && cntA <= cntB && cntB <= cntC;
}

void backtrack(int len) {
    if ((int)s.size() == len) {
        if (check()) cout << s << '\n';
        return;
    }

    for (char c = 'A'; c <= 'C'; c++) {
        s.push_back(c);
        backtrack(len);
        s.pop_back();
    }
}

// author: Trần Quang Dương aka DTDucas

int main() {
    cin >> n;
    for (int len = 1; len <= n; len++) {
        backtrack(len);
    }
    return 0;
}
