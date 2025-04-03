// problem: A3-025
// difficulty: 4.8/5

#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9;

int32_t main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n, w, l; cin >> n >> w >> l;
    vector <vector <int>> wood(n);
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        wood[i].push_back(-100000);
        for (int j = 0; j < num; j++) {
            int x; cin >> x;
            wood[i].push_back(x);
        }
        wood[i].push_back(5000000);
        sort(wood[i].begin(), wood[i].end());
    }
    for (int i = 1; i <= w; i++) {
        bool can = true;
        for (int j = 0; j < n; j++) {
            int idx = lower_bound(wood[j].begin(), wood[j].end(), i) - wood[j].begin();
            int move = inf;
            move = min(move, abs(wood[j][idx + 1] - i));
            move = min(move, abs(wood[j][idx] - i));
            move = min(move, abs(wood[j][idx - 1] - i));
            if (move > l) {
                can = false;
                break;
            } 
        }
        if (can) {
            cout << 1 << '\n';
            return 0;
        }
    }
    cout << 0 << "\n";
}