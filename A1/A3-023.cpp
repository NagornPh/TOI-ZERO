// problem: A3-023
// difficulty: 5/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    int l, r; cin >> l >> r;
    vector <bool> prime(15005, true);
    prime[1] = false;
    for (int i = 2; i <= 15000; i++) {
        if (prime[i]) {
            for (int j = i + i; j <= 15000; j += i) {
                prime[j] = false;
            }
        }
    }
    vector <vector <int>> dp(4, vector <int> (15005));
    dp[0][0] = 1;
    for (int i = l; i <= r; i++) {
        for (int j = 1; j <= 3; j++) {
            for (int k = 15000; k >= i; k--) {
                dp[j][k] += dp[j - 1][k - i];
            }
        }
    }
    int ans = 0;
    for (int i = l * 3; i <= r * 3; i++) {
        if (prime[i]) ans += dp[3][i];
    }
    cout << ans;
}