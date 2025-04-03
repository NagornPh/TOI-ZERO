// problem: A3-009
// difficulty: 2/5

#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
    cin.tie(NULL)->sync_with_stdio(false);
    int n, k; cin >> n >> k;
    vector <int> freq(k + 1); 
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        freq[x]++;
    }
    int mn = *min_element(freq.begin() + 1, freq.begin() + k + 1);
    cout << accumulate(freq.begin(), freq.end(), 0) - mn * k;
}