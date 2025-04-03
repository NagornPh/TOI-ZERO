// problem: A3-015
// difficulty: 1/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n; cin >> n;
    vector <int> a(n); for (auto &e : a) cin >> e;
    sort(a.begin(), a.end());
    int sum = 0, ans = 0;
    for (auto e : a) {
        sum += e;
        ans += sum * 2;
    }
    cout << ans;
}