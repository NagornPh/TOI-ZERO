// problem: A3-014
// difficulty: 1.5/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n; cin >> n;
    vector <int> a(n); for (auto &e : a) cin >> e;
    int x = 0, y = 0;
    for (auto e : a) {
        if (e > 18) x++;
        else y++;
    }
    cout << max(0, x - y - 1) + n;
}