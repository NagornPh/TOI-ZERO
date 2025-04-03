// problem: A3-005
// difficulty: 4/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int m, n; cin >> m >> n;
    map <int, int> mp;
    for (int i = 0; i < n; i++) {
        int l, r; cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }
    int ans = 0, sum = 0;
    for (auto [idx, cnt] : mp) {
        sum += cnt;
        ans = max(ans, sum);
        // cout << idx << ": " << cnt << "\n";
    }
    cout << ans;
}