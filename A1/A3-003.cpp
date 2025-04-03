// problem: A3-003
// difficulty: 1/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n; cin >> n;
    vector <int> a(n), b(n);
    for (auto &e : a) cin >> e;
    for (auto &e : b) cin >> e;
    int u1 = 1, u2 = 1, v1 = 1, v2 = 1, ans = 0;
    for (int i = 0; i < n; i++) {
        // cout << x << " -> " << a[i] << "\n" << y << " -> " << b[i] << "\n------------\n";
        v1 = a[i], v2 = b[i];
        if ((min(u1, v1) == min(u2, v2) && max(u1, v1) == max(u2, v2)) || (min(u1, v1) < min(u2, v2) && min(u2, v2) < max(u1, v1) && max(u1, v1) < max(u2, v2)) || (min(u2, v2) < min(u1, v1) && min(u1, v1) < max(u2, v2) && max(u2, v2) < max(u1, v1))) ans++;
        u1 = v1, u2 = v2;
    }
    cout << ans;
}