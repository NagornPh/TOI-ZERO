// problem: A3-019
// difficulty: 0.5/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n, q; cin >> n >> q;
    vector <int> a(n);
    for (auto &e : a) cin >> e;
    vector <int> ans(n);
    ans[0] = 0;
    int mx = a[0];
    for (int i = 1; i < n; i++) {
        ans[i] = max(0, (mx + 1) - a[i]);
        mx = max(mx, a[i]);
    }
    while (q--) {
        int x; cin >> x;
        x--;
        cout << ans[x] << "\n";
    }
}