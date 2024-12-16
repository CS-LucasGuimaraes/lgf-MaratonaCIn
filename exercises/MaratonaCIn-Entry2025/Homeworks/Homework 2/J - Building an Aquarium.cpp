#include <bits/stdc++.h>

#define endl '\n'

using namespace std;
using ll = long long;

ll f(int h, vector<int>& arr) {
    ll answ = 0;     
    for (auto e : arr) {
        answ += max(0, h-e);
    }

    return answ;
}

// Time Complexity: O(log(n))
int binarySearch(int l, int r, vector<int>& arr, ll target) {
    int answ;
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // If NOT SOLVE, ignore left half
        if (! (f(m, arr) > target) )
            l = m + 1;
 
        // If SOLVE, ignore right half
        else {
            answ = m;
            r = m - 1;
        }
    }
 
    return answ-1;
}

int solve() {

    int n, x; cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << binarySearch(0, INT_MAX, arr, x) << endl;
    

    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc; cin >> tc; while (tc--) {
        solve();
    }

    return 0;
}