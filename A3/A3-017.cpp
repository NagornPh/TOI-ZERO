// problem: A3-018
// difficulty: 2.5/5

#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int w, l, n, m; cin >> w >> l >> n >> m;
    int ans = n * m;
    for (int i = n; i <= m; i++) ans = min(ans, (w % i) * (l % i));
    cout << ans;
}