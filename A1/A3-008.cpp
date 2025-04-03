// problem: A3-008
// difficulty: 4/5

#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for (auto &e : a) cin >> e;
    unordered_map <int, int> freq;
    int l = 0, cnt = 0, ans = 0;
    for (int r = 0; r < n; r++) {
        if (!freq[a[r]]) cnt++;
        freq[a[r]]++;
        while (cnt >= k) {
            ans += n - r;
            freq[a[l]]--;
            if (!freq[a[l]]) cnt--;
            l++;
        }
    }
    cout << ans;
}