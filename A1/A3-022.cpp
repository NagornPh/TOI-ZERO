// problem: A3-022
// difficulty: 2/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n; cin >> n;
    vector <int> a(361);
    for (int i = 0; i < n; i++) {
        int l, r; cin >> l >> r;
        if (l < r) for (int j = l; j < r; j++) a[j] = 1;
        else {
            for (int j = l; j <= 360; j++) a[j] = 1;
            for (int j = 0; j < r; j++) a[j] = 1;
        }
    }
    int sum = 0, left = 0, right = 0;
    int in = 0;
    for (int i = 0; i < 360; i++) {
        if (!a[i]) sum = 0;
        else sum++;
        in = max(in, sum);
    }
    for (int i = 0; i < 360; i++) {
        if (a[i]) left++;
        else break;
    }
    for (int i = 359; i >= 0; i--) {
        if (a[i]) right++;
        else break;
    }
    int out = min(360, left + right);
    cout << max(in, out);
}