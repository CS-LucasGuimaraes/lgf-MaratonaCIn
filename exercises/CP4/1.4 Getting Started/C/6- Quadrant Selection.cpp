#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x, y; cin >> x >> y;

         if (x > 0 && y > 0) cout << 1;
    else if (x < 0 && y > 0) cout << 2;
    else if (x > 0 && y < 0) cout << 4;
    else if (x < 0 && y < 0) cout << 3;
    cout << '\n';

    return 0;
}