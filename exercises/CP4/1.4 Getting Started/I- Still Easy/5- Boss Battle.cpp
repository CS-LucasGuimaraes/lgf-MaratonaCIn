#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    if (n <= 3) {
        cout << 1 << endl;
    } else {
        cout << n - 2 << endl;
    }

    return 0;
}