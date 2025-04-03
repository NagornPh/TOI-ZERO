// problem: A3-021
// difficulty: 1.5/5

#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for (auto &e : a) cin >> e;
    sort(a.begin(), a.end());
    int num = a[0] * k, ans = 1;
    for (int i = 1; i < n; i++) {
        ans += (((num + a[i] - 1) / a[i]) == k);
    }
    cout << ans;
}