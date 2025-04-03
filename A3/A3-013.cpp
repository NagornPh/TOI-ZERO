// problem: A3-013
// difficulty: 1/5

#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n, s; cin >> n >> s; 
    int mn = 0, mx = 0; 
    for (int i = 0; i < n; i++) {
        int h; cin >> h; 
        bool three = !(h % 3); 
        bool four = !(h % 4); 
        if (three && !four){
            mn += 10 * (h / 3);
            mx += 10 * (h / 3);
        }
        else if (!three && four){
            mn += 10 * (h / 4);
            mx += 10 * (h / 4);
        }
        else if (three && four){
            mn += 10 * (h / 4);
            mx += 10 * (h / 3);
        }
    }
    cout << s - mx << " " << s - mn;
}