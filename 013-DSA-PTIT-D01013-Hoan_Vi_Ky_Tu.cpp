#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char c1, c2;
vector<char> a;

void output() {
    for (char c : a) cout << c;
    cout << '\n';
}

// author: Trần Quang Dương aka DTDucas

int main() {
    cin >> c1 >> c2;
    if (c1 > c2) swap(c1, c2);

    for (char c = c1; c <= c2; c++) a.push_back(c);

    do {
        output();
    } while (next_permutation(a.begin(), a.end()));

    return 0;
}
