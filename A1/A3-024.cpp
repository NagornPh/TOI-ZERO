// problem: A3-024
// difficulty: 3/5

#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
    int n, l; cin >> n >> l;
    vector <pair <int, int>> a(n);
    for (auto &[l, r] : a) cin >> l >> r;
    sort(a.begin(), a.end(), [](const pair <int, int> &x, const pair <int, int> &y){
        if (x.second == y.second) return x.first < y.first;
        else return x.second < y.second;
    });
    int ans = 0, curr = -1;
    for (auto [l, r] : a) {
        if (l <= curr) continue;
        ans++; curr = r;
    }
    cout << ans;
}