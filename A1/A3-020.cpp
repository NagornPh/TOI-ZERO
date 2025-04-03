// problem: A3-020
// difficulty: 3.5/5

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int h1, h2, b1, b2, x, y; cin >> h1 >> h2 >> b1 >> b2 >> x >> y;
    int ans = 0;
    for (int i = 0; i <= x; i++) { // black, black
        for (int j = 0; j + i <= x; j++) { // white, white
            for (int k = 0; k <= y; k++) { // black, white
                for (int l = 0; l + k <= y; l++) { // white, black
                    int nh1 = i + k, nh2 = j + l, nb1 = i + l, nb2 = j + k;
                    if (nh1 <= h1 && nh2 <= h2 && nb1 <= b1 && nb2 <= b2) {
                        ans = max(ans, i + j + k + l);
                    }
                }
            }
        }
    }
    cout << ans;
}