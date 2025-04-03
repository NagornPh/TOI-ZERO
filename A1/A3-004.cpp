// problem: A3-004
// difficulty: 2/5

#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n; cin >> n;
    vector <int> x, y;
    for (int i = 0; i < n; i++) {
        int xx, yy; cin >> xx >> yy;
        x.emplace_back(xx + yy), y.emplace_back(xx - yy);
    }
    sort(x.begin(), x.end()); sort(y.begin(), y.end());
    int mid = (n - 1) / 2;
    int xx = x[mid], yy = y[mid];
    int ans = 0;
    for (int i = 0; i < n; i++) ans += abs(x[i] - xx) + abs(y[i] - yy);
    cout << ans;
}