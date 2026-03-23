#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int n;
string lastName;
vector<string> names, a, cur;
vector<int> used;

void output() {
    for (int i = 0; i < (int)cur.size(); i++) {
        cout << cur[i] << " ";
    }
    cout << lastName << '\n';
}

void backtrack(int pos) {
    if (pos == n - 1) {
        output();
        return;
    }

    for (int i = 0; i < (int)a.size(); i++) {
        if (!used[i]) {
            used[i] = 1;
            cur.push_back(a[i]);
            backtrack(pos + 1);
            cur.pop_back();
            used[i] = 0;
        }
    }
}

// author: Trần Quang Dương aka DTDucas

int main() {
    cin >> n;
    names.resize(n);
    for (int i = 0; i < n; i++) cin >> names[i];
    cin >> lastName;

    for (string x : names) {
        if (x != lastName) a.push_back(x);
    }

    sort(a.begin(), a.end());
    used.assign(a.size(), 0);

    backtrack(0);
    return 0;
}
