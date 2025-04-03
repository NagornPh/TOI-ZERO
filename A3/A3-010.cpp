// problem: A3-010
// difficulty: 1/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n, k, t; cin >> n >> k >> t;
    int ans = 0, curr = 0;
    while (true) {
        ans++;
        if (curr == t-1) break;
        curr += k; curr %= n;
        if (curr == 0) break;
    }
    cout << ans;
}