// problem: A3-007
// difficulty: 1.5/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int l, n; cin >> l >> n;
    int ans = 0;
    while (n > 0 && ++ans) {
        int sum = 0;
        for (int i = 1; i <= l * ans; i++) sum += min(i, l);
        n -= sum;
        // cout << ans << ": " << n << "\n";
    }
    cout << ans;
}