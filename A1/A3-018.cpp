// problem: A3-018
// difficulty: 1.5/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n, k; cin >> n >> k;
    vector <int> pref(n); pref[0] = 1;
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + (i + 1) * (i + 1);
    }
    cout << n - (upper_bound(pref.begin(), pref.end(), k) - pref.begin());
}